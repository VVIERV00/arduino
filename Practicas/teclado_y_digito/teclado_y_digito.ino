#include <Keypad.h>
#include <Key.h>

const int a = 11;
const int b = 10;
const int c = 9;
const int d = 8;
const int e = 7;
const int f = 6;
const int g = 5;
const int h = 4;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
    Serial.begin(9600);


  
}

void loop() {
  contar(800);

  byte ROWS = 4; 
  byte COLS = 4; 
  
  char hexaKeys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
  };
  
  byte rowPins[ROWS] = {3, 2, 1, 6}; 
  byte colPins[COLS] = {13, 12, 4, 3}; 
  
 Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
  
  while(true){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }
  }
} 




void contar(int descanso){
  cero();
  delay(descanso);  
  reset();
  uno();
  delay(descanso);  
  reset();
  dos();
  delay(descanso);  
  reset();
  tres();
  delay(descanso);  
  reset();
  cuatro();
  delay(descanso);  
  reset();
  cinco();
  delay(descanso);  
  reset();
  seis();
  delay(descanso);  
  reset();
  siete();
  delay(descanso);  
  reset();
  ocho();
  delay(descanso);  
  reset();
  nueve();
  delay(descanso);  
  reset();
  
}




void teclado (){



  
}


void reset(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

}
void uno(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
}
void dos(){
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void tres(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

}
void cuatro(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
}
void cinco(){
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void seis(){
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

}
void siete(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}
void ocho(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void nueve(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
}
void cero(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
}
