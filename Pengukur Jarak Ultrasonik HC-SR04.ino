const int trigPin = 9;
const int echoPin = 8;

long duration;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Bersihkan pin trig
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Kirim pulsa trigger 10 mikrodetik
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Baca durasi pulsa echo
  duration = pulseIn(echoPin, HIGH);

  // Hitung jarak (cm)
  distance = duration * 0.034 / 2;

  // Tampilkan hasil ke Serial Monitor
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // tunggu setengah detik sebelum baca lagi
}
