#define ledPin 2

void setup(){
    Serial.begin(115200);
    pinMode(ledPin,OUTPUT);
}

void loop(){
    if (Serial.available()){
        String msg = Serial.readString();
        digitalWrite(ledPin,HIGH);
        delay(100);
        digitalWrite(ledPin,LOW);
    }
}
