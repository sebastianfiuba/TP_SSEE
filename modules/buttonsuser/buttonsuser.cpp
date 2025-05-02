
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
bool debounceButtons(log_t* check);
void readButtons(log_t* readlog);



//=====[Implementations of public functions]===================================



void updateButtons(log_t* events){

  log_t first_aux;
  initLog(*first_aux);
  readButtons(*first_aux);

    if (checkLogButtons(first_aux, &events))
      if (debounceButtons(*first_aux))
        updateLogButtons(*first_aux, events);
    
  return
}


//=====[Implementations of private functions]==================================

static bool debounceButtons(log_t* check){

  
    delay(DEBOUNCE_TIME_MS);

    log_t second;
  
    readButtons(*second);


    return !checkLogButtons(&check, second)

}

static void readButtons(log_t* readlog){

    bool button1 = ;

    bool button2 = ;
    
    makeLogButtons(readlog, button1, button2);

    return
}

