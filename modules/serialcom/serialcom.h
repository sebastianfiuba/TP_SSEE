//=====[#include guards - begin]===============================================

#ifndef _SERIALCOM_H_
#define _SERIALCOM_H_


#include "eventlog.h"

//=====[Declaration of public defines]=========================================

//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================

void pcSerialComInit();
char pcSerialComCharRead();

void pcSerialComStringWrite(const char* str);

void pcSerialComUpdate(sys_t* sys_a, log_t* log_a);

bool pcSerialComCodeCompleteRead();

void pcSerialComCodeCompleteWrite(bool state);


//=====[#include guards - end]=================================================

#endif // _SERIALCOM_H_
