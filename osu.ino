#include <TrinketKeyboard.h>
#define Key_1 0 // key Z,
#define Key_2 2 // key X
 
void setup()
{
  pinMode(Key_1, INPUT);
  pinMode(Key_2, INPUT);
  digitalWrite(Key_1, HIGH);
  digitalWrite(Key_2, HIGH);
  TrinketKeyboard.begin();
}
 
void loop()
{
  TrinketKeyboard.poll();
 
  if (!digitalRead(Key_1))
  {
    if (!digitalRead(Key_2))
    {
      TrinketKeyboard.pressKey(0, KEYCODE_Z, KEYCODE_X);
    }
    else
    {  
      TrinketKeyboard.pressKey(0, KEYCODE_Z);
    }
  }
  else if (!digitalRead(Key_2))
  {
    TrinketKeyboard.pressKey(0, KEYCODE_X);
  }
  else
  {
    TrinketKeyboard.pressKey(0, 0);
  }  
}
