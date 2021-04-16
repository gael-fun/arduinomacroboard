<h1>About this proyect</h1>
This is a Macroboard. the purpose in this proyect is to map the keys to mute yourself in discord , obs , etc.
<h1>How do i make one</h1>
You Just need an Arduino pro micro with Atmega32u4 Chipset and some switches, you just upload my code and its working.
The pins you need to connect it are 
<code>
2, 3, 4, 5, 6, 7,8 ,9
</code>
<h1>Photo Below</h1>
<img src="https://i.imgur.com/OrkCfag.png">
<img src="https://i.imgur.com/P76JepT.jpg">
<h1>What the code does?</h1>
It generates the F13-F20 keys and actuates them when you press the switches.
Example code:
```js
 if (pressed[0] >= DEBOUNCE)
  {
    if (!digitalRead(SHIFTLED))
    {
      keySend(KEY_F13); // F13
    }
```
<h1>Explanation of the code</h1>
What the code does it detects if you press the switch so if you do it will turn on the integrated led in the arduino and then it sends the keypressed 

<h1>Photos of the Build</h1>
I know that is pretty horrible but is a prototype :D
<img src="https://i.imgur.com/SnH7amB.jpg">
<img src="https://i.imgur.com/hQceTn2.jpg">

<h1>Help</h1> 
if you need help dont heasitate to message me in discord <code>Gael#2505</code>
