#include <Arduino.h>
#line 1 "C:\\Users\\betyt\\AppData\\Local\\Temp\\arduino_modified_sketch_820350\\sketch_nov19a.ino"
byte Operando1 = B0101;
byte Operando2 = B1101;
byte Operando3 = B0011;

byte resultado = 0;

#line 7 "C:\\Users\\betyt\\AppData\\Local\\Temp\\arduino_modified_sketch_820350\\sketch_nov19a.ino"
void setup();
#line 12 "C:\\Users\\betyt\\AppData\\Local\\Temp\\arduino_modified_sketch_820350\\sketch_nov19a.ino"
void loop();
#line 7 "C:\\Users\\betyt\\AppData\\Local\\Temp\\arduino_modified_sketch_820350\\sketch_nov19a.ino"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  resultado = Operando1 && Operando2;
  resultado = resultado || Operando3;
  resultado = ~resultado;
}
