// Carreguem la llibreria Capacitive Sensor
// Ho fem des de Sketch -> Include Library i la seleccionem
#include <CapacitiveSensor.h>

// Definim la variable sensor
const int sensor_pin1 = 2
const int sensor_pin2 = 4
CapacitiveSensor sensor = CapacitiveSensor(4,2);

// Definim un llindar i el pin del LED
int llindar = 1000;
const int pinLED = 12;

void setup() {
  // put your setup code here, to run once:
  // monitoritzarem el funcionament del sensor:
  Serial.begin(9600);
  // definim el mode del pin
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // definim quantes mostres ha de recollir el sensor per
  // interval de temps
  long sensorValue = sensor.capacitiveSensor(30)
  // printem el valor del sensor
  Serial.println(sensorValue)

  if(sensorValue < llindar){
    digitalWrite(pinLED, HIGH);
  }else{
    digitalWrite(pinLED, LOW);
  }
  delay(10);
}

