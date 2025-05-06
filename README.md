# TP_02
Título: Cerradura controlada por temperatura y humedad. 

Alumno: Sebastián Andrada

Objetivo: Desarrollar un sistema que controle una cerradura segun temperatura, humedad y una interfaz de usuario de software y fisica.

Descripción: 

El sistema debe controlar una ceradura midiendo la temperatura y la humedad de donde se encuentre, cuando el sistema detecte que la temperatura pasa cierto umbral definido por el usuario, baja de una temperatura fija minima o aumenta la humedad de un valor fijo maximo se abre la cerradura. Si esta dentro de los rangos se cierra. Para ello, se define con dos #define el valor maximo de humedad y la temeperatura minima. Se  usan grados Celsius.
El usuario puede abrir la cerradura independientemente de las concidiones pero solo puede cerrarla ignorando lo medido de forma fisica. Cuando se da el comando de abrir unicamente el comando de cerrar (ambos fisico o remoto) puede anular la orden. El sistema prioriza abrir la cerradura. El sistema puede ser configurado para estar correctamene ubicado temporalmente.

Para medir la temperatura y la humedad se usa el sensor dht11 que se puede encontrar aca:
[https://articulo.mercadolibre.com.ar/MLA-930151306-sensor-analogico-temperatura-lm35dz-lm35-55c-a-150c-_JM#polycard_client=search-nordic&position=9&search_layout=stack&type=item&tracking_id=ebca7547-7db6-4114-ad18-bfeb51baf674&wid=MLA930151306&sid=search](https://www.mercadolibre.com.ar/dht11-sensor-de-temperatura-humedad-dht-11-arduino/p/MLA32624358#polycard_client=search-nordic&searchVariation=MLA32624358&wid=MLA1666030296&position=3&search_layout=grid&type=product&tracking_id=6ec316c3-8e8f-4f5f-aa64-b72c598be1bb&sid=search)

Este sensor funciona en usando una linea usando un protocolo de comunicacion half-duplex. Para empezar la comunicacion se manda al sensor una señal especifica y se busca su respuesta. Si hay respuesta se verifica la misma y despues de eso se guardan los datos.

Si el usuario quiere cambiar el umbral del sistema se utiliza un potenciómetro.

El control fisico esta manejado por dos botones, uno si se presiona da el comando de abrir y el otro el de cerrar.

El estado de la cerradura se muestra con dos leds, uno se prende si esta abierta y el otro si esta cerrada.

La cerradura se controlaria con un servo motor como el siguiente:
https://www.mercadolibre.com.ar/mini-servo-tower-pro-sg90-9g-robotica-arduino-servomotor/p/MLA46735454#polycard_client=search-nordic&searchVariation=MLA46735454&wid=MLA2029850566&position=2&search_layout=stack&type=product&tracking_idws=6c7b7a13-4f65-46b4-a9e5-7da6822a7150&sid=search 
pero en esta etapa se utiliza un led que se prende si esta cerrada la cerradura.

Al principio del programa se muestran los comandos disponibles.
- Ver el estado de la cerradura
- Ver el estado de los botones
- Ver el estado de los leds
- Ver la temperatura actual
- Ver la humedad actual
- Ver los limites de temperatura y humedad
- Ver la fecha y hora actual (si esta configurada)
- Configurar la fecha y hora
- Abrir la cerradura
- Cerrar la cerradura
- Ver los comandos (si se toca algo diferente tambien se pueden ver)
- Mostrar el registro de todos los datos actuales

Cada vez que haya un cambio o se pida con un comando se envía a través del puerto serie el registro de todos los datos actuales:
- Estado de la cerradura
- Estado de los botones
- Estado de los leds
- Temperatura actual
- Humedad actual
- Limites de temperatura y humedad
- Fecha y hora actual (si esta configurada)


Plataforma de desarrollo: NUCLEO-F429ZI

Periféricos a utilizar:

DIGITAL IN 1 (D2): Controla el que la cerradura se abra. 

DIGITAL IN 2 (D3): Controla que la cerradura se cierra.

DIGITAL IN - OUT (D4): Controla el sensor y recibe los datos.

LED 1: Se enciende si la cerradura está cerrada.

LED 2: Se enciende si la cerradura está abierta.

LED 3: Se enciende si la cerrudara está cerrada (Remplaza al servo en esta etapa).

ANALOG IN 1 (A0): Se utiliza para leer el umbral de temperatura

UART: Se utiliza para enviar información de estado del sistema


Diagrama en bloques del sistema:
![Diagrama 1](images/Sistema.png) 

Diagrama en bloques del programa:
![Diagrama 2](images/Programa.png)

