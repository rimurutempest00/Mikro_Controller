// C++ code

int ledgreen_Baharuddin_1 = 11;
int ledyellow_Baharuddin_1 = 12;
int ledred_Baharuddin_1 = 13;

int ledgreen_Baharuddin_2 = 8;
int ledyellow_Baharuddin_2 = 9;
int ledred_Baharuddin_2 = 10;

void setup()
{
 pinMode(ledgreen_Baharuddin_1, OUTPUT);
 pinMode(ledyellow_Baharuddin_1, OUTPUT);
 pinMode(ledred_Baharuddin_1, OUTPUT);
  
 pinMode(ledgreen_Baharuddin_2, OUTPUT);
 pinMode(ledyellow_Baharuddin_2, OUTPUT);
 pinMode(ledred_Baharuddin_2, OUTPUT);
}

void blok_1(){
  digitalWrite(ledred_Baharuddin_1,HIGH);
  digitalWrite(ledgreen_Baharuddin_2, HIGH);
  delay(5000);
  digitalWrite(ledred_Baharuddin_1, LOW);
  digitalWrite(ledyellow_Baharuddin_1, HIGH);
  delay(2000);
  digitalWrite(ledyellow_Baharuddin_1, LOW);
  digitalWrite(ledgreen_Baharuddin_1, HIGH);
  digitalWrite(ledgreen_Baharuddin_2, LOW);
  
}
void blok_2(){
  digitalWrite(ledred_Baharuddin_2,HIGH);
  digitalWrite(ledgreen_Baharuddin_1, HIGH);
  delay(5000);
  digitalWrite(ledred_Baharuddin_2, LOW);
  digitalWrite(ledyellow_Baharuddin_2, HIGH);
  delay(2000);
  digitalWrite(ledyellow_Baharuddin_2, LOW);
  digitalWrite(ledgreen_Baharuddin_2, HIGH);
  digitalWrite(ledgreen_Baharuddin_1, LOW);
  
}

void loop()
{
 blok_1();
 blok_2();
  
}
