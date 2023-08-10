const int RED_PIN = 9;    // led đỏ
const int GREEN_PIN = 10; // led xanh lá
const int BLUE_PIN = 11;  // led xanh dương
int DELAY_TIME = 500;
void setup()
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}
void loop()
{
 digitalWrite(RED_PIN, HIGH);
 digitalWrite(GREEN_PIN, LOW);
 digitalWrite(BLUE_PIN, LOW);
 delay(DELAY_TIME);
 digitalWrite(RED_PIN, LOW);
 digitalWrite(GREEN_PIN, LOW);
 digitalWrite(BLUE_PIN, LOW);
 delay(DELAY_TIME);
}
