//=====[Libraries]=============================================================

#include "arm_book_lib.h"
#include "mbed.h"


//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================
void updateUserleds(log_t *led){
  bool state = getLockLog(led);
  if(getChangesFlagLog(led)){

  }
  return
}

