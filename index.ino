#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup()
{ lcd.begin(16,2);
lcd.print(“ARDUİNO”);
lcd.setCursor(0,1); //ekranda imlecin yerini belirler. 
lcd.print(“LCD KAYDIRMA”); //ekrana “lcd kaydırma” yazar 
}
void loop() {
int i=0;
for(i=0; i<16; i++)
{
lcd.scrollDisplayRight(); //yazıyı 16 sütun sağa kaydırır
}
delay(200);
}
for(i=0; i<16; i++)
{
lcd.scrollDisplayLeft(); // yazıyı 16 sütun sola kaydırır
delay(200); }