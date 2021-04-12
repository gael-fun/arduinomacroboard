# About This proyect
This is a Macroboard. the purpose in this proyect is to map the keys to mute yourself in discord , obs , etc.
# How do i make one
You Just need an Arduino pro micro with Atmega32u4 Chipset and some switches, you just upload my code and its working.
The pins you need to connect it are 
```
byte buttons[] = {2, 3, 4, 5,6,7,8,9}; //Also you can use the analogic pins you have to put them like this A0= 10

```
# Photo Below
<img src="https://i.imgur.com/OrkCfag.png">
<img src="https://i.imgur.com/P76JepT.jpg">
<h1>What the code does?</h1>
It generates the F13-F20 keys and actuates them when you press the switches.
Example code:
<code>
  if (pressed[0] >= DEBOUNCE)
  {
    if (!digitalRead(SHIFTLED))
    {
      keySend(KEY_F13); // F13
    }
</code>
# Explanation of the code
What the code does it detects if you press the switch so if you do it will turn on the integrated led in the arduino and then it sends the keypressed 

# Photos of the Build
I know that is pretty horrible but is a prototype so XD
<img src="https://i.imgur.com/SnH7amB.jpg">
<img src="https://i.imgur.com/hQceTn2.jpg">

# Help 
if you need help dont heasitate to message me in discord *Gael#2505*
