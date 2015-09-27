String typed;   // variavel que armazenarah a mensagem, quando chegar.

void setup() {
  Serial.begin(9600);     // inicializa a USB (modo serial) e configura a taxa de transferencia para 9600 bps
}

void loop() {
  if (Serial.available() > 0) {
    // se for maior que zero ha mensagem para receber.
    typed = Serial.readString();          // arduino le a mensagem

    Serial.print("Arduino recebeu... ");  // arduino envia mensagem ao computador acusando o recebimento
    Serial.println(typed);                // arduino devolve a mesma mensagem ao computador.
  }
}
