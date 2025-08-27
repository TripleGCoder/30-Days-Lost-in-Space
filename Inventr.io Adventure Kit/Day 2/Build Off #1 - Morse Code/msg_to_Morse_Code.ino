/*
In this File I will be translating English words into morse code. Remeber Morse code follows the following ratio for spacing.
Gap between the blinks of each letter: 1 unit
Gap between Letter: 3 unit
Gap between word: 7 unit
*/

#include "Arduino.h"//include the Pre-Proccessor Directive


#define CABIN_LIGHTS_PIN 12 // Define pin 12 
#define DOT_TIME 200   // 1 Morse time unit (ms) – change this to speed up/slow down

//----------------
String MSG = "Hello";// In the Quotation Marks write your message
//-------------------------------------------

//define dot and dash function
void dot() {
  digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  delay(DOT_TIME);        // ON for 1 unit
  digitalWrite(CABIN_LIGHTS_PIN, LOW);
  delay(DOT_TIME);        // OFF for 1 unit (intra-symbol gap)
}

// A dash is 3 units
void dash() {
  digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  delay(3 * DOT_TIME);    // ON for 3 units
  digitalWrite(CABIN_LIGHTS_PIN, LOW);
  delay(DOT_TIME);        // OFF for 1 unit (intra-symbol gap)
}




void morseLetter(char letter) {
// Set up Switch and map each Morse Code Letter 
  switch (letter){
    case 'A': dot(); dash();
    break;
    case 'B': dash(); dot(); dot(); dot();
    break;
    case 'C': dash(); dot(); dash(); dot();
    break;
    case 'D': dash(); dot(); dot(); 
    break;
    case 'E': dot(); 
    break;
    case 'F': dot(); dot(); dash(); dot(); 
    break;
    case 'G': dash(); dash(); dot(); 
    break;
    case 'H': dot(); dot(); dot(); dot(); 
    break;
    case 'I': dot(); dot(); 
    break;
    case 'J': dot(); dash(); dash(); dash(); 
    break;
    case 'K': dash(); dot(); dash(); 
    break;
    case 'L': dot(); dash(); dot(); dot(); 
    break;
    case 'M': dash(); dash(); 
    break;
    case 'N': dash(); dot(); 
    break;
    case 'O': dash(); dash(); dash(); 
    break;
    case 'P': dot(); dash(); dash(); dot(); 
    break;
    case 'Q': dash(); dash(); dot(); dash(); 
    break;
    case 'R': dot(); dash(); dot(); 
    break;
    case 'S': dot(); dot(); dot(); 
    break;
    case 'T': dash(); 
    break;
    case 'U': dot(); dot(); dash(); 
    break;
    case 'V': dot(); dot(); dot(); dash(); 
    break;
    case 'W': dot(); dash(); dash(); 
    break;
    case 'X': dash(); dot(); dot(); dash(); 
    break;
    case 'Y': dash(); dot(); dash(); dash(); 
    break;
    case 'Z': dash(); dash(); dot(); dot(); 
    break;


    default: break; //ignores none Alphabet letters
  }
}

/*
for letter in MSG:
  if letter == "A":
    short blink, long blink 
    .
    .
    .
  if letter == "Z":
    long, long, short, short 


*/

void msg_reset(){
  delay(7 * DOT_TIME); 
  for (int i = 0; i<8; i++){
    digitalWrite(CABIN_LIGHTS_PIN, HIGH);
    delay(80);
    digitalWrite(CABIN_LIGHTS_PIN, LOW);
    delay(80);
  }
  delay(7 * DOT_TIME); 

}




 
void setup() {
  MSG.toUpperCase();
  pinMode(CABIN_LIGHTS_PIN, OUTPUT);    
}
 
void loop() {

  for (int i = 0; i < MSG.length(); i++) {
    char letter = MSG[i];
  if (letter == ' ') {
    delay(7 * DOT_TIME);     // Word gap = 7 units
  } else {
    morseLetter(letter);     // Blink the letter
    delay(3 * DOT_TIME);     // Letter gap = 3 units
    }
  }

  msg_reset();
                       
}
 
