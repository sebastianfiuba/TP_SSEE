//=====[Libraries]=============================================================

#include "arm_book_lib.h"

#include "mbed.h"

#include "eventlog.h"
#include "buttonuse.h"
#include "ledsuser.h"
#include "lock.h"
#include "potsens.h"
#include "realtime.h"
#include "serialcom.h"
#include "tempsensor.h"
#include "userinterface.h"

//=====[Declaration of private defines]========================================
#define DHTPIN D4
//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================
log_t sys;
dht11_t ths;
//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void smartHomeSystemInit(){

  userInterfaceInit();
  initLog(&sys);
  initLock();
  initSensor(&ths, DHTPIN);
  pcSerialComInit();
}

void smartHomeSystemUpdate(){

  userInterfaceUpdate(&sys);
  updateSensor(&sys, &ths);
  updateLock(&sys);
  pcSerialComUpdate(&sys);
  delay(SYSTEM_TIME_INCREMENT_MS);
}


//=====[Implementations of private functions]==================================
