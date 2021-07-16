#include<Servo.h>
#include <Wire.h>
#include<DS3231.h>
#include <GY6050.h>

DS3231 rtc(A4,A5);
String hari, waktu, tanggal;
GY6050 gyro(0x69);
int X;
int Y;

Servo ServoA;
Servo ServoB;
Servo ServoC;
int sudutA;
int sudutB;
int sudutC;

void setup() {
Serial.begin(9600);
ServoA.attach(5);
ServoB.attach(6);
ServoC.attach(9);

rtc.begin();
Wire.begin();
gyro.initialisation();
Serial.println("akan segera dimulai!!/n");
delay(10000);
}

void loop() {
for(sudutA=0;sudutA<90;sudutA+=1){
  ServoA.write(sudutA);
  waktu=rtc.getTimeStr();
  X = gyro.refresh('A', 'X');
  Y = gyro.refresh('A', 'Y');
    Serial.print("waktu ->  "); Serial.println(waktu);
    Serial.print("Servo ->  "); Serial.print("A = "); Serial.print(sudutA); Serial.print("  B = "); Serial.print(sudutB); Serial.print("  C = "); Serial.println(sudutC);
    Serial.print("Gyro  ->  "); Serial.print("X = "); Serial.print(X); Serial.print("  Y = "); Serial.println(Y);
    Serial.println("============================================================");
  delay(30);
}
delay(1000);
for(sudutA=90;sudutA>=0;sudutA-=1){
  ServoA.write(sudutA);
  waktu=rtc.getTimeStr();
  X = gyro.refresh('A', 'X');
  Y = gyro.refresh('A', 'Y');
    Serial.print("waktu ->  "); Serial.println(waktu);
    Serial.print("Servo ->  "); Serial.print("A = "); Serial.print(sudutA); Serial.print("  B = "); Serial.print(sudutB); Serial.print("  C = "); Serial.println(sudutC);
    Serial.print("Gyro  ->  "); Serial.print("X = "); Serial.print(X); Serial.print("  Y = "); Serial.println(Y);
    Serial.println("============================================================");
  delay(30);
}
delay(1000);
for(sudutB=0;sudutB<90;sudutB+=1){
  ServoB.write(sudutB);
  waktu=rtc.getTimeStr();
  X = gyro.refresh('A', 'X');
  Y = gyro.refresh('A', 'Y');
    Serial.print("waktu ->  "); Serial.println(waktu);
    Serial.print("Servo ->  "); Serial.print("A = "); Serial.print(sudutA); Serial.print("  B = "); Serial.print(sudutB); Serial.print("  C = "); Serial.println(sudutC);
    Serial.print("Gyro  ->  "); Serial.print("X = "); Serial.print(X); Serial.print("  Y = "); Serial.println(Y);
    Serial.println("============================================================");
  delay(30);
}
delay(1000);
for(sudutB=90;sudutB>=0;sudutB-=1){
  ServoB.write(sudutB);
  waktu=rtc.getTimeStr();
  X = gyro.refresh('A', 'X');
  Y = gyro.refresh('A', 'Y');
    Serial.print("waktu ->  "); Serial.println(waktu);
    Serial.print("Servo ->  "); Serial.print("A = "); Serial.print(sudutA); Serial.print("  B = "); Serial.print(sudutB); Serial.print("  C = "); Serial.println(sudutC);
    Serial.print("Gyro  ->  "); Serial.print("X = "); Serial.print(X); Serial.print("  Y = "); Serial.println(Y);
    Serial.println("============================================================");
  delay(30);
}
delay(1000);
for(sudutC=0;sudutC<90;sudutC+=1){
  ServoC.write(sudutC);
  waktu=rtc.getTimeStr();
  X = gyro.refresh('A', 'X');
  Y = gyro.refresh('A', 'Y');
    Serial.print("waktu ->  "); Serial.println(waktu);
    Serial.print("Servo ->  "); Serial.print("A = "); Serial.print(sudutA); Serial.print("  B = "); Serial.print(sudutB); Serial.print("  C = "); Serial.println(sudutC);
    Serial.print("Gyro  ->  "); Serial.print("X = "); Serial.print(X); Serial.print("  Y = "); Serial.println(Y);
    Serial.println("============================================================");
  delay(30);
}
delay(1000);
for(sudutC=90;sudutC>=0;sudutC-=1){
  ServoC.write(sudutC);
  waktu=rtc.getTimeStr();
  X = gyro.refresh('A', 'X');
  Y = gyro.refresh('A', 'Y');
    Serial.print("waktu ->  "); Serial.println(waktu);
    Serial.print("Servo ->  "); Serial.print("A = "); Serial.print(sudutA); Serial.print("  B = "); Serial.print(sudutB); Serial.print("  C = "); Serial.println(sudutC);
    Serial.print("Gyro  ->  "); Serial.print("X = "); Serial.print(X); Serial.print("  Y = "); Serial.println(Y);
    Serial.println("============================================================");
  delay(30);
}
delay(1000);
}
