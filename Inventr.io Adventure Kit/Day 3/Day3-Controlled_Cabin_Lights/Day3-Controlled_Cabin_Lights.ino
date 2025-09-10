//Learning how to use a DIP(Dual In-line Package) Switch in order to be able to turn on our light ON and OFF when we want it too.

//Learning Conditional Statements Like If's, else, == comparison opperators and digitalRead()


#include "Arduino.h" //Includes information/library for the Hero Board
#define CABIN_LIGHTS_PIN 12 //Getting our power for our Lnader's Lights via PIN 12 on the board
#define CABIN_LIGHTS_SWITCH_PIN 2 // Connect our light switch to PIN 2

void setup() {
  pinMode(CABIN_LIGHTS_PIN, OUTPUT);              //Set the light control pin as an OUTPUT  
  pinMode(CABIN_LIGHTS_SWITCH_PIN, INPUT);        //Since we are going to be reading from the switch to see if its ON or OFF, this pin is an INPUT

}

void loop() {
// Using If/else statements, read the switch input and check if its ON (HIGH) or OFF(LOW)

if(digitalRead(CABIN_LIGHTS_SWITCH_PIN) == HIGH){
  digitalWrite(CABIN_LIGHTS_PIN, HIGH);
}
else{
  digitalWrite(CABIN_LIGHTS_PIN, LOW);
}


}
