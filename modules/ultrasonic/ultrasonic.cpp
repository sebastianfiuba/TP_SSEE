#include "ultrasonic.h"


//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================


//=====[Implementations of public functions]===================================

HCSR04::HCSR04(PinName trigPin, PinName echoPin)
    : trig(trigPin), echo(echoPin) {
    lastDistance = 0.0f;
    startTime = 0;
    echo.rise(callback(this, &HCSR04::echoRise));
    echo.fall(callback(this, &HCSR04::echoFall));
}



void HCSR04::start() {
    triggerTicker.attach(callback(this, &HCSR04::sendTriggerPulse), ULTRASONIC_SAMPLE_TIME); // se muestrea la distancia cada 100ms con una interrupción.
}

void HCSR04::stop() {
    triggerTicker.detach(); 
}

float HCSR04::readDistance() {
    return lastDistance;
}


//=====[Implementations of private functions]==================================


void HCSR04::sendTriggerPulse() { //esta es la secuencia de disparo para que empiece a medir el sensor. se encuentra en su datasheet
    trig = 0;
    wait_us(2);
    trig = 1;
    wait_us(10);
    trig = 0;
}

void HCSR04::echoRise() { //se usa una interrupcion de flanco ascendete sobre el pin de echo para empezar una cuenta de microsegundos.
    timer.reset();
    timer.start();
    startTime = timer.elapsed_time().count();
}

void HCSR04::echoFall() { //se usa una interrupcion de flanco descendente sobre el pin de echo para terminar una cuenta de microsegundos y ver el tiempo que paso entre que mando el sondio y lo recibio el sensor (ON TIME del pin echo).
    timer.stop();
    us_timestamp_t duration = timer.elapsed_time().count() - startTime;
    lastDistance = duration / 58.0f; // microsegundos a cm
}

