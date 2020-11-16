#define led1 2
#define led2 7
char leitura;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);


}

void loop() {

  while(Serial.available()) {
    leitura = Serial.read();
    if (leitura == 'S') {
      digitalWrite(led1, HIGH);
    }
    else if (leitura == 'N') {
      digitalWrite(led2, HIGH);
    }
    
    else Serial.end(); // Fim da conexão
  }
}
