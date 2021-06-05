#include <stdint.h>
#include <EEPROM.h>

#include "level.hpp"



void setup() {
	Serial.begin(115200);

  Serial.print("Start writing EEPROM of size ");Serial.println(sizeof(bin_levels));
	for (int i=0 ; i<sizeof(bin_levels) ; i++)
		EEPROM.write(i, bin_levels[i]);
  Serial.println("Program written");
}

void loop() {
	delay(1000);
}

