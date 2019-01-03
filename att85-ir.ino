#include <boarddefs.h>
#include <IRremote.h>

// http://woodsgood.ca/projects/2015/02/13/rgb-led-strip-controllers-ir-codes/
#define  IR_OFF    0xFF02FD
 
IRsend mySender;
 
void setup() {
  mySender.sendNEC(IR_OFF, 32);
  exit(0);
}

void loop() {}
