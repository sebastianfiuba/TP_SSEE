//=====[Libraries]=============================================================

#include "arm_book_lib.h"
#include "mbed.h"
#include "eventlog.h"

//=====[Declaration of private defines]========================================
#define LOW_LIMIT_TEMP 15
#define HIGH_LIMIT_HUM 80
//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================
bool checkLockConditions(log_t *lock){

  if(getBut1(lock))
    return false
  if(getBut2(lock))
    return true
  float sens_aux = getSensLog(lock);
  float temp_aux = getTempLog(lock);
  if(LOW_LIMIT_TEMP >= temp_aux <= sens_aux)
    return true
  int hum = getHumLog(lock);
  if(hum >= HIGH_LIMIT_HUM)
    return true
}

void changeLock(bool state){

  
  return
}
//=====[Implementations of public functions]===================================

void updateLock(log_t *locklog){

  
  bool statelock = checkLockConditions(locklog);

  bool changeslock = checkChangesLockLog(locklog, stateLock);

  if(changeslock){
    changeLock(statelock);
    updateLogLock(locklog, statelock); //changes true
  }
  return 
}
