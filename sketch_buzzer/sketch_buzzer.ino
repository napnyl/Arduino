// ************************ Program that makes a bip every 4 seconds ************************
// ************************ Programa que emite un pitido cada 4 segundos ************************
// Nelson Parra Romo
// 2016/11/17

//It must be a PWM pin / Debe ser un pin de PWM
int speakerPin = 11; //Pin used for active buzzer, dont forget to connect the positive buzzer pin to the signal from arduino.
                     //Pin utilizado para buzzer activo, no olvides conectar el pin positivo del buzzer activo al pin de señal desde el arduino.

void setup() {
  int pitch = 1500;// //1500-2000 excelent bip sound / excelente pitido
}

void loop() {
  tone(speakerPin, pitch); //Tone fuction is used with PWM in order to make buzzer bip / La función tone se utiliza mediante un pin PWM para realizar la emisión del pitido
  delay(100); //Bip delay / Tiempo de pitido
  noTone(speakerPin); //Stop buzzer from making sounds / Para la emisión de sonido del buzzer
  delay(4000); //Time to wait between bip sound / Tiempo de espera entre pitidos
}
