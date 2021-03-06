#define Trig 2
#define Echo 3
#define LED 4

void setup()
{
  Serial.begin(9600);
  pinMode(Trig,OUTPUT); // 센서 Trig 핀
  pinMode(Echo,INPUT); // 센서 Echo 핀
  pinMode(LED,OUTPUT);
  digitalWrite(LED,HIGH);
}

void loop()
{
  long duration, cm;

  digitalWrite(Trig,HIGH); // 센서에 Trig 신호 입력
  delayMicroseconds(10); // 10us 정도 유지
  digitalWrite(Trig,LOW); // Trig 신호 off

  duration = pulseIn(Echo,HIGH); // Echo pin: HIGH->Low 간격을 측정
  cm = microsecondsToCentimeters(duration); // 거리(cm)로 변환

  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  if (cm<7)
  digitalWrite(LED,LOW);
  else
  digitalWrite(LED,HIGH);
  delay(300); 
}

long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}
