#define LATCH_DIO 4
#define CLK_DIO 7
#define DATA_DIO 8
/* Định nghĩa giá trị hiển thị LED từ 0 đến 9 */
const byte SEGMENT_MAP[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
/* Định nghĩa LED điều khiển từ 1 đến 4 */
const byte SEGMENT_SELECT[] = {0xF1,0xF2,0xF4,0xF8};
void setup ()
{
	pinMode(LATCH_DIO,OUTPUT);
	pinMode(CLK_DIO,OUTPUT);
	pinMode(DATA_DIO,OUTPUT);
}
void loop() 
{
	WriteNumberToSegment(0 , 0);
	WriteNumberToSegment(1 , 1);
	WriteNumberToSegment(2 , 2);
	WriteNumberToSegment(3 , 3);
}
void WriteNumberToSegment(byte Segment, byte Value)
{
	digitalWrite(LATCH_DIO,LOW);
	shiftOut(DATA_DIO, CLK_DIO, MSBFIRST, SEGMENT_MAP[Value]);
	shiftOut(DATA_DIO, CLK_DIO, MSBFIRST, SEGMENT_SELECT[Segment]);
	digitalWrite(LATCH_DIO,HIGH);
}