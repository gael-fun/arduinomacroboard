# About This proyect
This is a Macroboard.The purpouse in this proyect is to map the keys to mute yourself in discord , obs , etc.
# How do i make one
You Just need an Arduino pro micro with Atmega32u4 Chipset and some switches, you just upload my code
Photo Below:
<img src="https://i.imgur.com/OrkCfag.png">
<img src="https://i.imgur.com/P76JepT.jpg">
# ¿What my code does?
It generates the F13-F20 keys and actuates them when you press the switches 
Example code:
```
  if (pressed[0] >= DEBOUNCE)
  {
    if (!digitalRead(SHIFTLED))
    {
      keySend(KEY_F13); // F13
    }
```
# Explanation of the code
What the code does it detects if you press the switch so if you do it will turn on the integrated led in the arduino and then it sends the keypressed 
