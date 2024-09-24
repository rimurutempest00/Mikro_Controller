int D0223305_LDR = A0;         // Pin LDR
int D0223305_PIR = 2;          // Pin PIR
int D0223305_LED1 = 3;         // LED1 pin
int D0223305_LED2 = 4;         // LED2 pin
int D0223305_LED3 = 5;         // LED3 pin
int D0223305_LED4 = 6;         // LED4 pin
int D0223305_LED5 = 7;         // LED5 pin

void setup() {
  pinMode(D0223305_PIR, INPUT);
  pinMode(D0223305_LED1, OUTPUT);
  pinMode(D0223305_LED2, OUTPUT);
  pinMode(D0223305_LED3, OUTPUT);
  pinMode(D0223305_LED4, OUTPUT);
  pinMode(D0223305_LED5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(D0223305_LDR);     // Baca nilai LDR
  int pirState = digitalRead(D0223305_PIR);    // Baca status PIR

  Serial.print("LDR: ");
  Serial.println(ldrValue);

  if (pirState == HIGH) {   // Jika PIR mendeteksi gerakan
    if (ldrValue > 670) {   // Jika Sangat ternag
      digitalWrite(D0223305_LED1, HIGH);
      digitalWrite(D0223305_LED2, LOW);
      digitalWrite(D0223305_LED3, LOW);
      digitalWrite(D0223305_LED4, LOW);
      digitalWrite(D0223305_LED5, LOW);
    } else if (ldrValue > 500) {   // Jika lumayan terang
        digitalWrite(D0223305_LED1, HIGH);
      digitalWrite(D0223305_LED2, HIGH);
      digitalWrite(D0223305_LED3, LOW);
      digitalWrite(D0223305_LED4, LOW);
      digitalWrite(D0223305_LED5, LOW);
    } else if (ldrValue > 400) {   // Sedikit terang
      digitalWrite(D0223305_LED1, HIGH);
      digitalWrite(D0223305_LED2, HIGH);
      digitalWrite(D0223305_LED3, HIGH);
      digitalWrite(D0223305_LED4, LOW);
      digitalWrite(D0223305_LED5, LOW);
    } else if (ldrValue > 200) {   // jika agak gelap
      digitalWrite(D0223305_LED1, HIGH);
      digitalWrite(D0223305_LED2, HIGH);
      digitalWrite(D0223305_LED3, HIGH);
      digitalWrite(D0223305_LED4, HIGH);
      digitalWrite(D0223305_LED5, LOW);
    } else {   // Sangat gelap
      digitalWrite(D0223305_LED1, HIGH);
      digitalWrite(D0223305_LED2, HIGH);
      digitalWrite(D0223305_LED3, HIGH);
      digitalWrite(D0223305_LED4, HIGH);
      digitalWrite(D0223305_LED5, HIGH);
    }
  } else {  // Jika tidak ada gerakan, semua LED mati
      digitalWrite(D0223305_LED1, LOW);
      digitalWrite(D0223305_LED2, LOW);
      digitalWrite(D0223305_LED3, LOW);
      digitalWrite(D0223305_LED4, LOW);
      digitalWrite(D0223305_LED5, LOW);
  }

  delay(1000);  // Tunggu sejenak sebelum mengulang
}
