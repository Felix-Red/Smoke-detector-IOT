#include <LiquidCrystal.h>

LiquidCrystal lcd(5,6,10,9,8,7);
int button = 3;
int redled = 2;
int sensor = A0;
int buzzer = 4;
int switchstate = 0;
void setup()
{
  pinMode(redled,OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop()
{
  int analogValue = analogRead(sensor);
  Serial.print(analogValue);
  switchstate = digitalRead(3);
  if(analogValue>400)
  {
    digitalWrite(redled, HIGH);
    delay(250);
    tone(buzzer, 1000, 10000);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("SMOKE DETECTED!!");
    delay(2000);
    digitalWrite(redled, LOW);
    delay(250);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("EVACUATE");
    delay(1000);
  }
  else
  {
    digitalWrite(redled, LOW);
    noTone(buzzer);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("SAFE...");
    delay(2000);  
  }
  if(switchstate == HIGH)
  {
    noTone(buzzer);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("Resetting...");
    delay(5000);
  }
}
