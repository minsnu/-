int triggerPin = 9;
int echoPin = 8;
int buzzerPin - 7;


void setup() {
 pirMode(triggerPin, OUTPUT);
 pirMode(echoPin, INPUT);
 pirMode(buzzerPin, OUTPUT);

Serial.begin(9600);here, to run once;

}

void loop() {
float distance;
unsigned long duration; //pulsein
digitalkrite(triggerPin, HIGH);
delay(10);
digitalWrite(triggerPin, LON);

duration = pulseIn(echoPin, HIGH);

}
