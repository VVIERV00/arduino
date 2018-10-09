#include <Keypad.h>
#include <Key.h>


void setup() {

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
  int values[] = {0,0,0,0};
  int index = 0;
  while(true){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    if (customKey != 'D'){
       values[index] = customKey;
       index++;
       Serial.println("in" + index);
       index = index % 4;
              Serial.println("in" + index);

    }else{
      if ((values[0] == '1') && (values[1] == '2') && (values[2] == '3') && (values[3] == '4')){
        Serial.println("correcto");
      }else{
        Serial.println("pass wrong");
        Serial.println(values[0] + " " + index);
      }
    }
  }
  }
} 
void funcionPrincipal(){

  
}






void teclado (){



  
}
