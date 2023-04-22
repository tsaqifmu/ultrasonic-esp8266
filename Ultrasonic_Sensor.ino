#define triggerPin  D1        // TriggerPin pada NodeMCU  pin GPIO5 (D1).
#define echoPin     D2        // TriggerPin pada NodeMCU  pin GPIO4 (D2).

void setup() {
  
pinMode(triggerPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(115200); 
}

void loop() {

long duration, jarak;
digitalWrite(triggerPin, LOW);
delayMicroseconds(2); 
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10); 
digitalWrite(triggerPin, LOW);

duration = pulseIn(echoPin, HIGH);
jarak = (duration*0.034) / 2;
Serial.print("Jarak Sensor: ");
Serial.println(jarak);
delay(1000);

}
