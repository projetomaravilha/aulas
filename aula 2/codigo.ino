const int led2 = 2;
const int led3 = 3;
const int botao4 = 4;
const int botao5 = 5;

int var1;
int var2;

void setup()
{
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(botao4,INPUT);
  pinMode(botao5,INPUT);
}

void loop()
{
  var2 = digitalRead(botao4);
  var1 = digitalRead(botao5);

  if(var1) {
       digitalWrite(led2, HIGH);
  }else{
       digitalWrite(led2, LOW);
  }

  if(!var2) {
       digitalWrite(led3, HIGH);
  }else{
       digitalWrite(led3, LOW);
  }
}
