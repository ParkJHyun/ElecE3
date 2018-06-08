int cds=A1;
int LED=6;
void setup() {
 Serial.begin(9600);
 pinMode(LED,OUTPUT);

}

void loop() {
  int cdsValue=analogRead(cds);
  Serial.println(cdsValue);

  if(cdsValue>500)
  digitalWrite(LED,LOW);
  else
  digitalWrite(LED,HIGH);

  delay(300);
}
