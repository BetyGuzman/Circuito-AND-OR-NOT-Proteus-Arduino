byte Operando1 = B01011000;  // Corregido: sin espacio
byte Operando2 = B11011011;  // Corregido: sin espacio
byte Operando3 = B00110011;  // Corregido: sin espacio

byte resultado = 0;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  resultado = Operando1 && Operando2;  // Operación AND
  resultado = resultado || Operando3;  // Operación OR
  resultado = ~resultado;              // Operación NOT
}
