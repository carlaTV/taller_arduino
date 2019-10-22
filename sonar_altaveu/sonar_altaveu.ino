//definim les variables corresponents
#define trigPin 7
#define echoPin 6
#define led 13
#define buzzer 3
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  // definim les variables duració i distància.
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  // calculem la distància en funció del temps que ha trigat entre trog i echo
  distance = (duration/2) / 29.1;
 // fem sonar un so o un altre en funció de la distància
  if(distance < 30){
    digitalWrite(led, HIGH);
    sound = 250;
  }
  if(distance < 20){
    digitalWrite(led, HIGH);
    sound = 260;
  }
  if(distance < 10){
    digitalWrite(led, HIGH);
    sound = 290;
  }
}
