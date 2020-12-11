#include<LiquidCrystal.h>
const int rs=7, en=6, d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int val=0;
double voltage=0.0;
int angVal=0;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  lcd.setCursor(3,0);
  lcd.print("V: ");
  val=analogRead(A0);
  voltage=(val*0.0048828125)*10;
  lcd.setCursor(3,0);
  lcd.print(voltage);
  delay(1000);
}
