char gelen_deger = 0;


void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  if(Serial.available() > 0) {
    gelen_deger = Serial.read();
    Serial.print(gelen_deger);
    Serial.println("\n");
    if (gelen_deger == '1'){
      digitalWrite(13, HIGH);
    } else if(gelen_deger == '0') {
      digitalWrite(13, LOW);
    }
  }
}
