// C++ code
//
int temperature = 0;

int soilmoisturesensor = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop()
{
  temperature = map(((analogRead(A0) - 20) * 3), 0, 1023, -40, 125);
  if (temperature < 25) {
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
  }
  if (temperature > 25 && temperature < 60) {
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
  }
  if (temperature > 60 && temperature < 125) {
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    if (soilmoisturesensor <= 150) {
      digitalWrite(8, HIGH);
    } else {
      digitalWrite(8, LOW);
    }
  }

  soilmoisturesensor = analogRead(A1);
  Serial.println(soilmoisturesensor);
  delay(10); // Delay a little bit to improve simulation performance
}