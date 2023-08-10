/* define cho nút nhấn */
#define S1    1
#define S2    2
#define S3    3
#define NONE  0
/* define cho chân điều khiển motor */
#define MOTOR_A_DIR   12
#define MOTOR_A       10
int VR_value;      // Biến lưu giá trị biến trở
int _speed = 0;    // Biến lưu giá trị tốc độ cho động cơ, có giá trị từ 0->255

/* Hàm đọc nút nhấn */
int read_Button(){
   if(digitalRead(A1) == LOW )      return S1;
   if(digitalRead(A2) == LOW )      return S2;
   if(digitalRead(A3) == LOW )      return S3;
   return NONE;
}

void setup(){
  pinMode(MOTOR_A_DIR,OUTPUT);
  pinMode(MOTOR_A,OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  digitalWrite(MOTOR_A_DIR, LOW);
}
void loop(){
  VR_value = analogRead(A0);              // Đọc giá trị từ biến trở, giá trị từ 0->1024
  _speed = map(VR_value,0,1024,0,255);    // chuyển giá đổi giá trị biến trở thành tốc độ
  analogWrite(MOTOR_A,_speed);            // Xuất tín hiệu ra chân điều khiển
    switch(read_Button()){
    case S1:
           digitalWrite(MOTOR_A_DIR, LOW);  // nếu nút S1 nhấn thì cho motor quay thuận
           break;     
    case S3:
           digitalWrite(MOTOR_A_DIR, HIGH);   // nếu nút S3 nhấn thì cho motor quay nghịch 
           break; 
    default: break;    
    }
}
