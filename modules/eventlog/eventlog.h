//=====[#include guards - begin]===============================================

#ifndef _EVENTLOG_H_
#define _EVENTLOG_H_

//=====[Declaration of public defines]=========================================


//=====[Declaration of public data types]======================================
struct log_t{
  bool but1; 
  bool but2;
  bool led1;
  bool led2;
  bool lock;  
  bool changes;
  float temp;
  int hum;
  float sens;
}
//=====[Declarations (prototypes) of public functions]=========================
/*
 init all in 0 locked 
*/
void initLog(log_t *eventlog);

/*
true if dif
false if dif
  */
bool checkLogButtons(const log_t firstcomp, const log_t seccomp);

void makeLogButtons(log_t *logbuttons, const bool but1, const bool but2);

void updateLogButtons(log_t *logsource, log_t *logobj);

/*
true if dif
false if dif
*/

bool checkChangesLockLog(log_t *locklogcheck, const bool state);

void updateLogLock(log_t *locklogupd, const bool statelock);


bool getBut1(log_t *log);
bool getBut2(log_T *log);
float getSensLog(log_t *log);
float getTempLog(log_t *log);
int getHumLog(log_t *log);
bool getLockLog(log_t *log);
bool getChangesFlagLog(log_t *log);


//=====[#include guards - end]=================================================

#endif // _EVENTLOG_H_
