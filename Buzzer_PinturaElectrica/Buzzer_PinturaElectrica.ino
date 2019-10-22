#include <CapacitiveSensor.h>

CapacitiveSensor sensor = CapacitiveSensor(4,2);
int threshold = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long value = sensor.capacitiveSensor(100);
  Serial.println(value);
  if (value < threshold){
    tone(8,262);
  }
}
