#include <EEPROM.h>
#include "DigiKeyboard.h"

void setup() {
  EEPROM.write(0, 0);
  DigiKeyboard.println("reset");
}

void loop() {
}
