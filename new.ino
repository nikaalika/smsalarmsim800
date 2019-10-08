#include <SoftwareSerial.h>
SoftwareSerial sim(8, 9); 
int _timeout;
String _buffer;
const int buttonPin = 5;    //digital input      
int previousButtonState = HIGH;   
String num= "yourphonenumber";

void setup() {
  Serial.begin(9600);              
  sim.begin(9600); 
  pinMode(buttonPin, INPUT);
             }
    void loop() {
  int buttonState = digitalRead(buttonPin);
  if ((buttonState != previousButtonState)
      && (buttonState == HIGH)) 
                {
  String SMS = "yourtext";
  sim.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode 
  delay(1000);
   
  sim.println("AT+CMGS=\"" + num + "\"\r"); //inputs phone number
  delay(2000);
  sim.println(SMS);
  delay(2000);
  
  sim.println((char)26);// ASCII code of CTRL+Z,initializez sms send 
  delay(9000);       
  }
  previousButtonState = buttonState;
}
