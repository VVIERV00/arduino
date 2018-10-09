int speaker = 3;
int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};
int song[] = {261, 349, 392, 440, 392, 330, -10, 261, 349, 392, 440, 392, -10, -10, 261, 349, 392, 440, 392, 330, -10, 330, 349, 330, 261, 261};

void setup()

   {
        Serial.begin(9600);
        for (int i = 4; i<12; i++)
        pinMode(i, OUTPUT);
        pinMode(speaker, OUTPUT);
   }

void loop()
   {
        for ( int j= 4; j<12 ; j++)   // Va encendiendo los segmentos
           {
              digitalWrite(j, HIGH);
              //tone(speaker, tones[j-4]);
              delay(500);
           }
        for(int k = 0; k< (int) sizeof(song); k++){
          tone(speaker, song[k]);
          delay(500);
        }
        noTone(speaker);
        Serial.println("Apagose");
        for ( int j= 4; j<12 ; j++)   //Apaga todos los segmentos
              digitalWrite(j, LOW);
        delay(400) ;
   }
