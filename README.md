# sms alarm sim800 and arduino

On the attached images you can find schematic how I have chosen to build circuit 
During building procces it is very importent to consider is that

1) Sim 800 l or c supply voltage should be between 3.7 to 4.1 
2) Use voltage divider or level shifter to lower the serial comunication voltage(you will burn it's just matter of time)
3) Have common ground between arduino and sim 800 
4) Use pull down resistor for digital input

![image](https://user-images.githubusercontent.com/53902741/66381947-567a4f80-e9cb-11e9-8b06-5e1cf1534a72.png)

![image](https://user-images.githubusercontent.com/53902741/66390837-9433a400-e9dc-11e9-97e1-67ea64a98180.png)

