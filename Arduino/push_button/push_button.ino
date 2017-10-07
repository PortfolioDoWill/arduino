//Setando os pinos que serão usados
const int botao = 2;
const int led = 3;

void setup() 
{
  pinMode(botao, INPUT); //Configurando o pino 2 como pino de entrada
  pinMode(led, OUTPUT); //Configurando o pino 3 como pino de saída
}

void loop() 
{
  if(digitalRead(botao) == HIGH) //No caso de o push button estar em nível alto
    digitalWrite(led, HIGH); //O led acende
  else
    digitalWrite(led, LOW); //Caso contrário, ele apaga
}
