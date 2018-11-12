/*
Voy a probar el serial

*/

void setup() {
    Serial.begin(5600);
    pinMode(13, OUTPUT);
    Serial.println("Hola pi");
}

void loop() {
    
 
  if(Serial.available()){
    luz(Serial.parseInt());
    Serial.flush();
  }
  delay(1000);
  
  
}

void luz(int n){
  Serial.println("Voy a lucir");
  Serial.println(n);
  Serial.println("veces");
  for(int i = 0; i<n; i++){
    Serial.println(i+1);
    digitalWrite(13, HIGH);
    delay(600);
    digitalWrite(13, LOW);
    delay(600);
  }
   Serial.println("acabose");

}

