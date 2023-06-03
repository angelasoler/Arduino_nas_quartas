// Array com pinos de cada segmento do digito em ordem
int segments[6] = {6, 5, 3, 12, 11, 10};
int i = 0;

// inicializa os pinos
void setup() {
  while (i < 6)
  {
    pinMode(segments[i], OUTPUT);
    i++;
  }
}

// programa => liga um led de cada vez por un segundo cada
void loop() {
  i = 0;
  while (i <= 5)
  {
    digitalWrite(segments[i], HIGH);
    delay(100);
    digitalWrite(segments[i], LOW);
    i++;
  }
}
