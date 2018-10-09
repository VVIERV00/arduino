#include <Keypad.h>
#include <Key.h>

const int rojo = 10;
const int verde = 11;
void setup() {
  
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {

  byte ROWS = 4; 
  byte COLS = 4; 
  
  char hexaKeys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
  };
  
  byte rowPins[ROWS] = {3, 2, 8, 0}; 
  byte colPins[COLS] = {7, 6, 5, 4}; 
  
 Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
  char values[] = {'0', '0', '0', '0'};
  int index = 0;
  while(true){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
    if (customKey != 'D'){
       values[index] = customKey;
       index = (index+1) % 4;

    }else{
      if ((values[0] == '1') && (values[1] == '2') && (values[2] == '3') && (values[3] == '4')){
        Serial.println("you are now authenticated");
        digitalWrite(verde, HIGH);
        digitalWrite(rojo, LOW);

      }else{
        digitalWrite(rojo, HIGH);
        digitalWrite(verde, LOW);
        Serial.println("wrong pass");
        Serial.println("res: ");
        Serial.println(values[0]);
        Serial.println(values[1]);
        Serial.println(values[2]);
        Serial.println(values[3]);
      }
    }
  }
  }
} 






void teclado (){



  
}
