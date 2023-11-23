int s1= A0;
int s2= A2;
int sWert1 = 0;
int sWert2 = 0;
int sWS2 = 700;
int sWS1 = 700;
int LED1 = 12;
int LED2 = 8;

void setup(){
    Serial.begin(9600);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}
void loop(){
    sWert1 = analogRead(s1);
    sWert2 = analogRead(s2);
    Serial.print("s1 = ");
    Serial.println(sWert1);
  
  if ((sWert1 > sWS1) && (sWert2 > sWS2)){
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);

  } else {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
  }
}
