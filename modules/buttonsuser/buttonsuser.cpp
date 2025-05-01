
//=====[Libraries]=============================================================

#include "arm_book_lib.h"
#include "mbed.h"

#include "eventlog.h"


//=====[Declaration of private defines]========================================
#define DEBOUNCE_TIME_MS 100
//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

bool debounceButtons(log_t check){

  
    delay(DEBOUNCE_TIME_MS);

    log_t second = readButtons();

    if(checkLogButtons(check, second))
      return false

    return true

}

log_t readButtons(){

    bool button1 = ;

    bool button2 = ;
    
    return updateLogButtons(FALSE ,button1, button2);

}



//=====[Implementations of public functions]===================================



void updateButtons(log_t* events){

  log_t first = readButtons();

    if (checkLogButtons(first, events))
      if (debounceButtons(first))
        updateLogButtons(TRUE, first, events);
    
  return
}




