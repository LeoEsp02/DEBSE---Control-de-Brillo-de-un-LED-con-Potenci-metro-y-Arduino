//Declarar las constantes para los pines que se utlizaran

const int potPin = A0;  //Pin analogico conectado a la terminal (patita) central del potenciomentro
const int ledPin = 9;   //Pin PWM conectado al led

//configuracion inicial
void setup() {
  pinMode(ledPin, OUTPUT);  //Configura el pin del LED como salida para poder controlarlo
}

void loop() {
  //leer el valor del potenciometro desde el pin analogico
  int potValue = analogRead(potPin);

  //la funcion "analogRead(potPin)" devuelve un valor entre 0 y 1023,
  //dependiendo de la posicion del potenciometro, 0 es el minimo y 1023 el maximo



  //mapear el valor leido (0-1023) al rango PWM (0-255)
  int ledBrightness = map(potValue, 0, 1023, 0, 255);
  //la funcion 'map()' escala el valor de una entrada de un rango a otro.
  //Aqui se convierte el rango del potenciometro al rango del brillo del led
  // - Si `potValue` es 0, `ledBrightness` será 0 (LED apagado).
  // - Si `potValue` es 1023, `ledBrightness` será 255 (LED al brillo máximo).

  //Ahora se ajusta la intensidad del LED usando la señal PWM
  analogWrite(ledPin, ledBrightness);
  //la funcion 'analogWrite()' genera una señal WPM en el pin especifico, controlando la intensidad que eprcibe el led
  // # Un valor bajo (cerca de 0) genera una señal con pulsos muy cortos,
  //   lo que hace que el LED parezca apagado o tenue.
  // # Un valor alto (cerca de 255) genera pulsos más largos, iluminando
  //   el LED más intensamente.


  delay(10);
  //pausa breve para evitar cambios rapidos en el brillo del led
}
//Leonardo Ramos Espinoza y Sebastian Rodela Castillo 8F ISC 
