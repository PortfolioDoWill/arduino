const int botao = 2;
const int led = 3;

void setup() 
{
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop() 
{
  if(digitalRead(botao) == HIGH)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}
