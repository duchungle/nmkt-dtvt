#include <LiquidCrystal.h>
#include <Adafruit_Sensor.h> 
#include "DHT.h"
#define DHTPIN A1
#define DHTTYPE DHT11

LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // khởi tạo các chân cho LCD
DHT dht(DHTPIN, DHTTYPE);            // Khởi tạo biến toàn cục cho cảm biến

void setup() {
  Serial.begin(9600);             // Khởi tạo cổng COM kết nối đến máy tính
  dht.begin();                    // Khởi tạo kết nối đến cảm biến
  lcd.begin(16, 2);               // Khởi tạo kết nối đến LCD
}

void loop() {
  delay(2000);                     // thời gian chờ cảm biến chuyển đổi giá trị
  float h = dht.readHumidity();    // đọc giá trị độ ẩm
  float t = dht.readTemperature(); // đọc giá trị nhiệt độ theo Celcius
  float f = dht.readTemperature(true); // đọc giá trị nhiệt độ theo Fahrenheit
  // kiểm tra dữ liệu
  if (isnan(h) || isnan(t) || isnan(f)) {  
    Serial.println("Doc du lieu that bai");  
    return;
  }
  // in các giá trị ra cổng COM trên máy tính
  Serial.print("Do am: ");
  Serial.print(h);
  Serial.println();		//xuống dòng
  Serial.print("Nhiet do: ");
  Serial.print(t);
  Serial.print("*C ");
  Serial.print(f);
  Serial.print("*F\t");
  Serial.println();		//xuống dòng
  // Hiển thị giá trị trên LCD
  lcd.clear(); // xoá các giá trị cũ trên LCD
  // in ra giá trị nhiệt độ  
  lcd.setCursor(0, 0);
  lcd.print("Nhiet do:");
  lcd.print(t);  
  // in ra giá trị độ ẩm  
  lcd.setCursor(0,1); 
  lcd.print("Do am: ");
  lcd.print(h);    
}