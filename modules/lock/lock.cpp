//=====[Libraries]=============================================================

#include "arm_book_lib.h"
#include "mbed.h"
#include "eventlog.h"
#include "lock.h"

//=====[Declaration of private defines]========================================
#define LOW_LIMIT_TEMP 15
#define HIGH_LIMIT_HUM 80
#define OPEN_VALUE false
#define CLOSED_VALUE true
//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

DigitalOut lockOut(LED1);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================
static bool checkLockConditions(log_t* lock);
//=====[Implementations of public functions]===================================

void initLock(){

  changeLock(INIT_LOCK_VALUE);
}

void updateLock(log_t* locklog){

  
  bool statelock = checkLockConditions(locklog);

  bool changeslock = checkChangesLockLog(locklog, stateLock);

  if(changeslock){
    changeLock(statelock);
    updateLogLock(lockloga, statelock); //changes true
  }
  return;
}


void changeLock(bool state){
  
  lockOut = state;
  return;
}

//=====[Implementations of private functions]==================================

static bool checkLockConditions(log_t* lock){

  if(getBut1Log(lock)) // open
    return OPEN_VALUE;
  if(getBut2Log(lock)) // close
    return CLOSED_VALUE;
  int sens_aux = getSensLog(lock);
  int temp_aux = getTempLog(lock);
  if(LOW_LIMIT_TEMP >= temp_aux <= sens_aux)
    return OPEN_VALUE;
  int hum = getHumLog(lock);
  if(hum >= HIGH_LIMIT_HUM)
    return OPEN_VALUE;
}
