#define Pot1 0
int ledPin = 13;
int VR_value;
void setup()
{
	//Thiết lập tốc độ cổng UART với tốc độ baud 9600 bit/s
	Serial.begin(9600);
	pinMode(ledPin, OUTPUT);
}
void loop()
{
	//Xuất chuỗi ra cổng UART
	Serial.print(“Potentiometer reading: “);
	//Đọc giá trị trên pin Pot1
	VR_value = analogRead(Pot1);
	//Xuất giá trị đọc được trên Pot1
	Serial.println(VR_value);
	// Nếu giá trị VR_value >500
	if (VR_value > 500)
	{
		digitalWrite(ledPin, HIGH);	
	}
	//Nếu giá trị VR_value<500
	else
	{
		digitalWrite(ledPin, LOW);
	}
	delay(500);
}