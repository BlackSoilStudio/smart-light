/*
----------------------------------------
呼吸灯   ver 1.0   by 墨土BlackSoil
----------------------------------------
*/

// 针脚
int blueLed = 9;
int redLed = 10;

// 数据
int delayTime = 20;

// 初始化
void setup() {
	pinMode(blueLed, OUTPUT);
}

// 主循环
void loop() {
	
	// 蓝色LED
	fade(blueLed);
	
	// 红色LED
	fade(redLed);
	
}

// 呼吸灯
void fade(int ledPin) {
	
	// 亮
	for(int v=0; v<=255; v++) {
		analogWrite(ledPin, v);
		delay(delayTime);
	}
	
	// 暗
	for(int v=255; v>=0; v--) {
		analogWrite(ledPin, v);
		delay(delayTime);
	}
	
	// delay(1000);
	
}

// 指定颜色呼吸灯
void fadeByColor(char color) {
	
	// 判断颜色
	switch(color) {
		
		case 'blue':
			fade(blueLed);
			break;
			
		case 'red':
			fade(redLed);
			break;
			
		case 'green':
			fade(greenLed);
			break;
		
	}
}