int button = 3;
int led = 12;
void setup() {
  pinMode(button, INPUT);  //Cài đặt chân D3 ở trạng thái đọc dữ liệu
  pinMode(led,OUTPUT); // Cài đặt chân D12 dưới dạng OUTPUT
}

void loop() {
  int buttonStatus = digitalRead(button);    //Đọc trạng thái button
  if (buttonStatus == LOW) { // Nếu mà button bị nhấn
    digitalWrite(led,HIGH); // Đèn led sáng
  } else { // ngược lại
    digitalWrite(led,LOW);  //Đèn led tắt
  }
}
