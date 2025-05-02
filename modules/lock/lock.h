//=====[#include guards - begin]===============================================

#ifndef _LOCK_H_
#define _LOCK_H_

//=====[Declaration of public defines]=========================================

#define INIT_LOCK_VALUE true

//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================
void initLock();
void updateLock(log_t *locklog);
void changeLock(bool state);

//=====[#include guards - end]=================================================

#endif // _LOCK_H_
