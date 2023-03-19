        //3
        //Name: Maliha Nawar; ID: 17.01.05.131
void setup() {
DDRD=0b00001110;DDRB=0b00000001;}//initializing 8,3,2,1 pins as output for A,B,C,D LEDs

void loop() {
digitalWrite(8,HIGH);delay(2666);digitalWrite(3,HIGH);delay(2866);
digitalWrite(2,HIGH);delay(2668);digitalWrite(1,HIGH);//gradually turning on A,B,C,D within 8s
delay(1000);
digitalWrite(8,LOW);delay(2400);digitalWrite(2,LOW);delay(3000);
digitalWrite(3,LOW);delay(3000);digitalWrite(1,LOW);//turning off A,C,B,D gradually within 8s
delay(1000);}
