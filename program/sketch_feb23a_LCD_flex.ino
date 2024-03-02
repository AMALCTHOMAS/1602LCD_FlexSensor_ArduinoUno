#include <LiquidCrystal.h>

int flex_sensor = A0;

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int val = 0,angle=0;


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
}

void loop() {
  lcd.clear();
  lcd.print("ANGLE BENDED IS:");
  int val = analogRead(flex_sensor);
  int angle = map(val,795,920,0,45);
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  lcd.print("");
  // print the number of seconds since reset:
  lcd.setCursor(0, 1);
  lcd.print(angle);
  delay(500);
}
