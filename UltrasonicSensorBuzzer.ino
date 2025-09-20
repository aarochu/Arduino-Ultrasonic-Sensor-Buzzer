#define TRIG_PIN 9
#define ECHO_PIN 10
#define BUZZER_PIN 11
#define LED_PIN 13

long duration;
int distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 10) {
    tone(BUZZER_PIN, 1000);
    digitalWrite(LED_PIN, HIGH);
  } else if (distance < 20) {
    tone(BUZZER_PIN, 1000);
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    noTone(BUZZER_PIN);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  } else if (distance < 30) {
    tone(BUZZER_PIN, 1000);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    noTone(BUZZER_PIN);
    digitalWrite(LED_PIN, LOW);
    delay(500);
  } else {
    noTone(BUZZER_PIN);
    digitalWrite(LED_PIN, LOW);
  }

  delay(50);
}
