# sms alarm sim800 and arduino

This is simplified schematic on the image. very importent thing to consider is that
https://github.com/nikaalika/smsalarmsim800/issues/3#issue-503975843
1) Sim 800 l or c supply voltage should be between 3.7 to 4.1 
2) Use voltage divider or level shifter to lower the serial comunication voltage(you will burn it's just matter of time)
3) Have common ground between arduino and sim 800 
4) Use pull down resistor for digital input

![image](https://user-images.githubusercontent.com/53902741/66381947-567a4f80-e9cb-11e9-8b06-5e1cf1534a72.png)

