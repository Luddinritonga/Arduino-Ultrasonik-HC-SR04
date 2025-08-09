# 🔗 Demo Online
Simulasi proyek ini dapat Anda lihat di:

 [Jalankan langsung di Wokwi](https://wokwi.com/projects/438811252038067201) <br>
 [Tonton tutorial di YouTube](https://www.youtube.com/@Ri.tonga24)


# Pengukur Jarak Ultrasonik HC-SR04

Proyek ini menggunakan sensor ultrasonik HC-SR04 untuk mengukur jarak objek dan menampilkan hasilnya di Serial Monitor Arduino.

---

## Komponen

- Arduino Uno  
- Sensor Ultrasonik HC-SR04  
- Kabel jumper  

---

## Wiring

- VCC HC-SR04 → 5V Arduino  
- GND HC-SR04 → GND Arduino  
- TRIG HC-SR04 → Pin digital 9 Arduino  
- ECHO HC-SR04 → Pin digital 8 Arduino  

---

## Kode Arduino

```cpp
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
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}


 
```
## 📷 **skema / rangkaian**

![Lampu RGB Arduino](https://github.com/Luddinritonga/Arduino-Ultrasonik-HC-SR04/blob/main/skema.png)

## 🔧 **Cara Upload**
1. Sambungkan Arduino ke PC via kabel USB
2. Buka file `.ino` di Arduino IDE
3. Pilih board dan port yang sesuai
4. Upload kode ke Arduino




## 📫 Contact Me
[![Website](https://img.shields.io/badge/Website-000000?style=for-the-badge&logo=about-dot-me&logoColor=white)](https://luddinritonga.github.io/fortopolio/)
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/luddinritonga)
[![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:luddinritonga03@gmail.com)
[![YouTube](https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://www.youtube.com/@Ri.tonga24)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/luddin-ritonga-727920307?)
