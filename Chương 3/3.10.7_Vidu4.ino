int buzzer = 5;
void setup(){
    pinMode(buzzer, OUTPUT);
}
 
void loop(){
    tone(buzzer, 220, 125);
    delay(125);
    tone(buzzer, 2093, 250);
    delay(250);
    tone(buzzer, 82, 125);
    delay(125);
}
