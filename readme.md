# attiny85 LED-strip ON/OFF only remote-controller

the IR code for 44-key remote controller is listed up on this site:
http://woodsgood.ca/projects/2015/02/13/rgb-led-strip-controllers-ir-codes/

IRRemote library is required. You can install via Arduino IDE.

## AVR
Use ATTiny85 with 8MHz.

## schematics
- PIN 1
  - RESET. pull-up to Vdd.
- PIN 4
  - GND
- PIN 6
  - IR LED Anode via a 68R resistor
- PIN 8
  - Vdd (CR2032) via a momentary switch
