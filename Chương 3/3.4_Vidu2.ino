int buttonPin = 2; // khởi tạo biến buttonPin
int ledPin = 13; // khởi tạo biến ledPin
int buttonState = LOW; // khởi tạo biến buttonState
void setup() {
	pinMode(ledPin, OUTPUT); // thiết lập chế độ cho chân ledPin là xuất dữ liệu
	pinMode(buttonPin, INPUT); // thiết lập chế độ cho chân ledPin là nhập dữ liệu
}
void loop(){
	//đọc dữ liệu số từ buttonPin và gán giá trị vào buttonState
	buttonState = digitalRead(buttonPin);
	//so sánh giá trị của buttonState nếu là HIGH thì xuất dữ liệu HIGH ra chân ledPin và LOW thì ngược lại
	if (buttonState == HIGH) {
		digitalWrite(ledPin, HIGH);
	} else {
		digitalWrite(ledPin, LOW);
	}
}