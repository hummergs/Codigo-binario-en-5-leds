// pon un numero del 0 al 31
int number = 25;
// tienes que tener conectado los led con el puerto : 12,11,10,9,8.
// si no es un numero del 0 - 32 se encenderan todos los led palpitando.

int HoL12 = LOW;
int HoL11 = LOW;
int HoL10 = LOW;
int HoL9 = LOW;
int HoL8 = LOW;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  HoL12 = LOW; HoL11 = LOW; HoL10 = LOW; HoL9 = LOW; HoL8 = LOW;

if (number >= 0 && number <= 31) {
  if (number == 1 || number == 3 || number == 5 || number == 7 || number == 9 || number == 11 || number == 13 || number == 15 || number == 17 || number == 19 || number == 21 || number == 23 || number == 25 || number == 27 || number == 29|| number == 31) {
    HoL8 = HIGH;
  }
  if (number == 2 || number == 3 || number == 6 || number == 7 || number == 10 || number == 11 || number == 14 || number == 15 || number == 18 || number == 19 || number == 22 || number == 23 || number == 26 || number == 27 || number == 30 || number == 31) {
    HoL9 = HIGH;
  }
  if (number == 4 || number == 5 || number == 6 || number == 7 || number == 12 || number == 13 || number == 14 || number == 15 || number == 20 || number == 21 || number == 22 || number == 23| number == 28 || number == 29 || number == 30 || number == 31) {
    HoL10 = HIGH;
  }
  if (number == 8 || number == 9 || number == 10 || number == 11 || number == 12 || number == 13 || number == 14 || number == 15 || number == 31 || number == 24 || number == 25 || number == 26 || number == 27 || number == 28 || number == 29 || number == 30 || number == 31) {
    HoL11 = HIGH;
  }
  if (number >= 16) {
    HoL12 = HIGH;
  }

}
if (number >= 32){
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(800);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  delay(800);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(800);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  delay(800);
}
digitalWrite(12, HoL12);
digitalWrite(11, HoL11);
digitalWrite(10, HoL10);
digitalWrite(9, HoL9);
digitalWrite(8, HoL8);
}



