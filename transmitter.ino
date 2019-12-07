#define ledPin 2

void setup(){
    Serial.begin(115200);
    pinMode(ledPin,OUTPUT);
}

void loop(){
    Serial.println("AT+SEND=0,8,TEST MSG");
    digitalWrite(ledPin,HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(1000);
}
