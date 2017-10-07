//Configurando as portas
const int vermelho = 2;
const int amarelo = 3;
const int verde = 4;
//Configurando o tempo de delay
const int tempo1 = 5000;
const int tempo2 = 2000;

//Método que é acionado para configuração, executa apenas uma vez por execução
void setup() 
{
  //Setando as portas anteriormente criadas como saída
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

//Método que ascende o led por um tempo constante determinado
void acende(int farol, int tempo)
{
    digitalWrite(farol, HIGH); //Coloca o pino passado por parâmetro em alta
    delay(tempo); //Espera até que o tempo determinado seja finalizado
    digitalWrite(farol, LOW); //Desliga o pino
}

//Função que se repete durante todo o procedimento... É o main loop
void loop() 
{
  acende(vermelho, tempo1);
  acende(verde, tempo1);
  acende(amarelo, tempo2);
}
