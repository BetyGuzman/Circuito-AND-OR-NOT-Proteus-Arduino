# 1 "C:\\Users\\betyt\\AppData\\Local\\Temp\\arduino_modified_sketch_820350\\sketch_nov19a.ino"
byte Operando1 = 5;
byte Operando2 = 13;
byte Operando3 = 3;

byte resultado = 0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  resultado = Operando1 && Operando2;
  resultado = resultado || Operando3;
  resultado = ~resultado;
}
