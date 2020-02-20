int tp=12;
int ep=11;
float t,d;
void setup()
{
 Serial.begin(9600);
 pinMode(tp,OUTPUT);
 pinMode(ep,INPUT);
}

void loop()
{
digitalWrite(tp,HIGH);
delayMicroseconds(5);
digitalWrite(tp,LOW);
delayMicroseconds(100);

t = pulseIn(ep,HIGH);
Serial.println(t);
d=(t/2)*0.0343;// 343 is spped of sound in air
Serial.println(d);
delay(200);
}
