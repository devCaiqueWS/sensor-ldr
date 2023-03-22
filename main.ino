
int luminosidade = 0;

int i = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  luminosidade = analogRead(A0);
  Serial.println(luminosidade);
  if (luminosidade < 850) {
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(2, LOW);
  } else if (luminosidade < 940){
    digitalWrite(11, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(2, LOW);
  } else {
	digitalWrite(11, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(5, LOW);
    digitalWrite(2, HIGH);  
    delay(3000);
  }
  
}
