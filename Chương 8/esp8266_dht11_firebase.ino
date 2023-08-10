#include <FirebaseArduino.h>
#include <ESP8266WiFi.h>
#include "DHT.h"

#define DHTTYPE DHT11   // DHT 11

// Thay bằng tên Wifi và địa chỉ truy cập Wifi
const char* ssid = "KHOADTVT";
const char* password = "AB18051234";
#define FIREBASE_HOST "demodht11.firebaseio.com"
#define FIREBASE_AUTH "1Qv5Q2WzR3XiRG1qfS1J6XdK7QldbY2XagzFJrT0"
// Cảm biến DHT 
const int DHTPin = 5; // Chân data DHT11 nối vào GPIO5
// Khởi tạo DHT 
DHT dht(DHTPin, DHTTYPE);

static char celsiusTemp[7];
static char fahrenheitTemp[7];
static char humidityTemp[7];

// Chỉ chạy 1 lần khi khởi động
void setup() {
  // Khởi tạo Serial port
  Serial.begin(115200);
  delay(10);

  dht.begin();
  
  // Kết nối vào mạng WiFi
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

}

void loop() {

// Thời gian cảm biến đọc dữ liệu có thể mất 2s
       float h = dht.readHumidity();
// Đoc nhiệt độ giai Celsius (mặc định)
       float t = dht.readTemperature();
// Đoc nhiệt độ giai Fahrenheit (isFahrenheit = true)
       float f = dht.readTemperature(true);
// Kiểm tra đọc bị lỗi không
     if (isnan(h) || isnan(t) || isnan(f)) {
     Serial.println("Failed to read from DHT sensor!");
     strcpy(celsiusTemp,"Failed");
     strcpy(fahrenheitTemp, "Failed");
     strcpy(humidityTemp, "Failed");         
    }
    else {
// Tính nhiệt độ Celsius + Fahrenheit và độ ẩm
        float hic = dht.computeHeatIndex(t, h, false);       
        dtostrf(hic, 6, 2, celsiusTemp);             
        float hif = dht.computeHeatIndex(f, h);
        dtostrf(hif, 6, 2, fahrenheitTemp);         
        dtostrf(h, 6, 2, humidityTemp);
// Dòng lệnh sau để xuất ra monitor cosole để debug
        Serial.print("Humidity: ");
        Serial.print(h);
        Serial.print(" %\t Temperature: ");
        Serial.print(t);
        Serial.print(" *C ");
        Serial.print(f);
        Serial.print(" *F\t Heat index: ");
        Serial.print(hic);
        Serial.print(" *C ");
        Serial.print(hif);
        Serial.print(" *F");
        Serial.print("Humidity: ");
        Serial.print(h);
        Serial.print(" %\t Temperature: ");
        Serial.print(t);
        Serial.print(" *C ");
        Serial.print(f);
        Serial.print(" *F\t Heat index: ");
        Serial.print(hic);
        Serial.print(" *C ");
        Serial.print(hif);
        Serial.println(" *F");
        // Đưa dữ liệu lên firebase
      Firebase.setFloat("nhietdo",hic);
      if (Firebase.failed())
          Serial.println("Gui du lieu bi loi:");
      Firebase.setFloat("doam", hif);
      if (Firebase.failed()) 
        Serial.print("Gui du lieu bi loi:");
      }
    delay(2000);
} 
