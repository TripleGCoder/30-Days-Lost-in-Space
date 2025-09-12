# Day 4: Cabin Lighting

Description:
Similarly like previour, Using a DIP (Dual in-line Package) switch and C++ Conditional if/else statements, I can now turn on all my ships Lights whenever I want.

## Learnings

- **digitalRead()** — reading digital HIGH/LOW values from input pins

- **if { ... } else { ... }** — branching logic in C++

- **DIP Switch** basics and wiring

- **Pull-down resistors** to stabilize input signals

# Installation
```
**  Required Materials:  **

- Hero One Board        1x
- Bread Board           1x
- DIP Switch            1x
- LED Light             3x
- 220 Ohm resistor      3x
- 10k Ohm resistor      3x
 - Male-to-Male Cable   14x

```
### Software
1. Download previous pre-required drivers on your PC
2. Arduino IDE

### Hardware Setup (Hero & Breadboard)
See the image in this repo for a visual reference while wiring.

**LED Wiring**
- Place LED light on the bread board making sure that both pins are on seperate rows (eg. Anode on row 12 and Cathode row 13) 
- Using a Cable and a 220 Ohm resitor, Connect the Anode to pin 12 on the Hero Board.
- Using Cables, Connect the Cathode to GND.

- Do this 2 more times creating a total of 3 LED light circuits


**DIP Switch Wiring**
- Connect one side of a Cable to the 5v pin on the Hero, and the other side to an empty row on the bread board.
- Depending on which Switch you want to use (1, 2, or 3), connect its corresponding pin to the line that is running the 5v.
- Connect a Cable on the other side of the corresponding switch and connect it to pin 2
- Add a 10k Ohm resistor on the same line connected to ground (this ensures a stable LOW signal when the switch is off).

- Do this 2 more times connecting all switches with 5v and ending to ground, with each having thei rown pull down.

## Usage
- Upload the sketch to your Hero One board using Arduino IDE.
- Flip any of the 3 DIP switch:
    - ON → LED turns on
    - OFF → LED turns off


