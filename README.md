# TP_03
Título: Cerradura controlada por temperatura, humedad y aproximación. 

Alumno: Sebastián Andrada

Objetivo: Desarrollar un sistema que controle una cerradura segun una distancia medida, temperatura, humedad y una interfaz de usuario de software y fisica.

Descripción: 

El sistema debe controlar una ceradura midiendo a que distancia se enecuentra el objetivo, la temperatura y la humedad de donde se encuentre, cuando el sistema detecte que la distancia medida es menor a la configurada, la temperatura pasa cierto umbral definido por el usuario, baja de una temperatura fija minima o aumenta la humedad de un valor fijo maximo se abre la cerradura. Si esta dentro de los rangos se cierra. Para ello, se define con dos #define el valor maximo de humedad y la temeperatura minima. Se usan grados Celsius y centimetros.
El usuario puede abrir la cerradura independientemente de las concidiones pero solo puede cerrarla ignorando lo medido de forma fisica. Cuando se da el comando de abrir unicamente el comando de cerrar (ambos fisico o remoto) puede anular la orden. El sistema prioriza abrir la cerradura. El sistema puede ser configurado para mostrar la hora actual, aunque en esta etapa no es un requerimieto.

Para medir la temperatura y la humedad se usa el sensor dht11 que se puede encontrar aca:
[https://articulo.mercadolibre.com.ar/MLA-930151306-sensor-analogico-temperatura-lm35dz-lm35-55c-a-150c-_JM#polycard_client=search-nordic&position=9&search_layout=stack&type=item&tracking_id=ebca7547-7db6-4114-ad18-bfeb51baf674&wid=MLA930151306&sid=search](https://www.mercadolibre.com.ar/dht11-sensor-de-temperatura-humedad-dht-11-arduino/p/MLA32624358#polycard_client=search-nordic&searchVariation=MLA32624358&wid=MLA1666030296&position=3&search_layout=grid&type=product&tracking_id=6ec316c3-8e8f-4f5f-aa64-b72c598be1bb&sid=search)

Este sensor funciona usando una linea con un protocolo de comunicacion half-duplex. Para empezar la comunicacion se manda al sensor una señal especifica y se busca su respuesta. Si hay respuesta se verifica la misma y despues de eso se guardan los datos.

Si el usuario quiere cambiar el umbral del sistema se utiliza un potenciómetro.

El control fisico esta manejado por dos botones, uno si se presiona da el comando de abrir y el otro el de cerrar.

El estado de la cerradura se muestra con dos leds, uno se prende si esta abierta y el otro si esta cerrada.

La distancia se mide con el sensor hc-sr04 que se puede encontrar aca:
https://articulo.mercadolibre.com.ar/MLA-1394992860-arduino-hc-sr04-modulo-sensor-ultrasonico-5v-_JM?highlight=false&headerTopBrand=false#polycard_client=search-nordic&position=12&search_layout=grid&type=item&tracking_id=67394c92-79ac-4f1e-9bd5-6a61412d43d0&wid=MLA1394992860&sid=search

Se agrega esta funcionalidad por el uso del sensor en la etapa siguiente.
Este sensor funcioa usando dos lineas con un protocolo de comunicacion full-duplex real pero que practicamente es half-duplex ya que no se manda ni se recibe al mismo tiempo. Para realizar la medicion se manda una señal caracteristica como trigger y se espera su respuesta en la otra linea. Una vez que llega la misma como un 1 logico se empieza a contar el tiempo que se tarda en aparecer un 0 logico, despues usando una ecuacion se transforma el tiempo en distancia. Para esto se usan tres interrupciones, una de 100ms que se usa para empezar el ciclo del sensor y dos para cubrir los flancos ascendentes y descendentes del pin de ECHO.

Si el usuario quiere cambiar la distanca minima a la que debe acercarse para abrir la cerradura debe apretar los dos botones al mismo tiempo y elegir la señal, en este caso la puerta se abrira y se prendera un led, una vez que se suelten se apagara el led y la cerradura funcionara como siempre.


La cerradura se controla con un servo motor como el siguiente:
https://www.mercadolibre.com.ar/mini-servo-tower-pro-sg90-9g-robotica-arduino-servomotor/p/MLA46735454#polycard_client=search-nordic&searchVariation=MLA46735454&wid=MLA2029850566&position=2&search_layout=stack&type=product&tracking_idws=6c7b7a13-4f65-46b4-a9e5-7da6822a7150&sid=search 
Para controlarlo se utiliza un pwm con 50 Hz de frecuencia y se varía el ancho de pulso entre 1 ms y 1,5 ms. Estos valores equivalen a 0 y 180 grados, respectivamente. La cerradura estara abierta con el servo a 180 grados (1,5 ms) y cerrada a 90 grados (1,25 ms).

Al principio del programa se muestran los comandos disponibles.
- Ver el estado de la cerradura
- Ver el estado de los botones
- Ver el estado de los leds
- Ver la temperatura medida actual
- Ver la humedad medida actual
- Ver la distancia medida actual y el modo de lectura
- Ver los limites de temperatura, humedad y distancia
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
- Distancia actual y modo de lectura
- Limites de temperatura, humedad y distancia
- Fecha y hora actual (si esta configurada)


Plataforma de desarrollo: NUCLEO-F429ZI

Periféricos a utilizar:

DIGITAL IN 1 (D2): Controla el que la cerradura se abra. 

DIGITAL IN 2 (D3): Controla que la cerradura se cierra.

DIGITAL IN - OUT (D4): Controla el sensor y recibe los datos.

DIGITAL IN 3 (D5): Controla el trigger del sensor de ultrasonido.

DIGITAL OUT (D6): Recibe la salida ECHO del sensor de ultrasonido.

LED 1: Si esta apagado solo mide distancia, si esta prendido mide distancia y su respectivo limite.

LED 2: Se enciende si la cerradura está cerrada.

LED 3: Se enciende si la cerradura está abierta.

PWM 1 (D7): Controla el servo.

ANALOG IN 1 (A0): Se utiliza para leer el umbral de temperatura

UART: Se utiliza para enviar información de estado del sistema


Diagrama en bloques del sistema:
![Diagrama 1](images/Sistema.jpg) 

Diagrama en bloques del programa:
![Diagrama 2](images/Programa.jpg)

Video del sistema funcionando:

![Video](video/Proyecto.mp4)
