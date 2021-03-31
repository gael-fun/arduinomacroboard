#define SHIFTLED 10
#define POWERLED 11
#include "Keyboard.h"
#define DEBOUNCE 10  // Debounce
byte buttons[] = {
  2, 3, 4, 5,6,7,8,9}; // Los pines A0-A5 Se conocen como 14-19
#define NUMBUTTONS sizeof(buttons)
byte pressed[NUMBUTTONS];


void setup() {
  byte i;
  pinMode(POWERLED,OUTPUT);
  pinMode(SHIFTLED,OUTPUT);
  for (i=0; i< NUMBUTTONS; i++) {
    pinMode(buttons[i], INPUT);
  }
  delay(100);
  Keyboard.begin();
}



void check_switches()
{
  byte index;

  for (index = 0; index < NUMBUTTONS; index++) 
  {
    if (digitalRead(buttons[index]) and (pressed[index]<DEBOUNCE))
    {
      pressed[index]++;
    }
    else if (!digitalRead(buttons[index]))
    {
      pressed[index]=0;
    }
  }
}


void keySend(char key)
{
  digitalWrite(POWERLED, LOW);
  Keyboard.write(key);
  delay(100);
}

void loop()
{
  digitalWrite(POWERLED, HIGH);
  delay(10);
  check_switches();
  
  if (pressed[0] >= DEBOUNCE)
  {
    if (!digitalRead(SHIFTLED))
    {
      keySend(KEY_F13); // F13
    }
  }
  else if (pressed[1] >= DEBOUNCE)
  {
    if (!digitalRead(SHIFTLED))
    {
      keySend(KEY_F14); 
    }
    
  }
  else if (pressed[2] >= DEBOUNCE)
  {
    if (!digitalRead(SHIFTLED))
    {
      keySend(KEY_F15); 
    }
   
  }
 
  else if (pressed[3] >= DEBOUNCE)
  
  {
    keySend(KEY_F16); // ESC 
  }
  
  else if (pressed[4] >= DEBOUNCE)
  
  {
    keySend(KEY_F17); // ENTER
  }

  else if (pressed[5] >= DEBOUNCE)
  
  {
    if (!digitalRead(SHIFTLED))
    {
      keySend(KEY_F18); 
    }
  }

  else if (pressed[6] >= DEBOUNCE)
  
  {
    if (!digitalRead(SHIFTLED))
    {
      keySend(KEY_F19); 
    }

  }

  else if (pressed[7] >= DEBOUNCE)
  {
    if (!digitalRead(SHIFTLED))
    {
      keySend(KEY_F20); 
    } 
  }
}
