//=====[Libraries]=============================================================

#include "arm_book_lib.h"
#include "mbed.h"
#include "eventlog.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void updateLock(log_t *locklog){

  
  bool statelock = checkLockConditions();

  bool changeslock = checkChangesLockLog(locklog, stateLock);

  if(changeslock){
    changeLock();
    updateLogLock(locklog, statelock);
  }
  return 
}
