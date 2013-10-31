#ifndef _EEPROM_H_
#define _EEPROM_H_

#include "kkavr.h"

void EEWriteB(uint uiAddress, uchar ucData);
void EEWriteW(uint uiAddress, uint uiData);
uchar EEReadB(uint uiAddress);
uint EEReadW(uint uiAddress);

#endif//_EEPROM_H_
