//Deifine the Corresponding Light to the corresponding Pins
const byte CABIN_LIGHTS_PIN = 11;
const byte STORAGE_LIGHTS_PIN = 12;
const byte COCKPIT_LIGHTS_PIN = 13;

//Define Input signals (1,2 and 3) to their corresponding pin switches
const byte CABIN_LIGHTS_SWITCH_PIN = 2;
const byte STORAGE_LIGHTS_SWITCH_PIN = 3;
const byte COCKPIT_LIGHTS_SWITCH_PIN = 4;


void setup() {

  //Set the different room lights as Outputs
  pinMode(CABIN_LIGHTS_PIN, OUTPUT);
  pinMode(STORAGE_LIGHTS_PIN, OUTPUT);
  pinMode(COCKPIT_LIGHTS_PIN, OUTPUT);

  //Set the switches to inputs
  pinMode(CABIN_LIGHTS_SWITCH_PIN, INPUT);
  pinMode(STORAGE_LIGHTS_SWITCH_PIN, INPUT);
  pinMode(COCKPIT_LIGHTS_SWITCH_PIN, INPUT);


}

void loop() {
  //Use Conditional If Statements using digitalRead to find when a switch is on or off.


  if(digitalRead(CABIN_LIGHTS_SWITCH_PIN) == HIGH){
    digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  }
  else{
    digitalWrite(CABIN_LIGHTS_PIN, LOW);
  }
  

  if(digitalRead(STORAGE_LIGHTS_SWITCH_PIN) == HIGH){
    digitalWrite(STORAGE_LIGHTS_PIN, HIGH);  
  }
  else{
    digitalWrite(STORAGE_LIGHTS_PIN, LOW);
  }


  if(digitalRead(COCKPIT_LIGHTS_SWITCH_PIN) == HIGH){
    digitalWrite(COCKPIT_LIGHTS_PIN, HIGH);  
  }
  else{
    digitalWrite(COCKPIT_LIGHTS_PIN, LOW);
  }

}
