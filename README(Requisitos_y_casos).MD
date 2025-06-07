Título: Control de control de dosis de radiacion. 

Alumno: Sebastián Andrada

Objetivo: Desarrollar un sistema que controle la temperatura, humedad y el angulo de exposicion de un objeto usando una interfaz de usuario de software y fisica.

Descripción: 

El sistema debe controlar a que tanta radiacion esta expuesto un dispositivo sin tocarlo (sin necesariamente medir la radiacion) y a cuanta temperatura y humedad esta expuesto. 

1 Seleccion del proyecto:
-

1.1 Criterios de seleccion:
-

Para hacerlo se propone, como minimo, tres proyectos que cumplan el objetivo, sean realizables y se diferencien por los siguientes criterios:

-Dificultad. (Que tan dificil es realizar el proyecto).
-Practicidad. (Que tanto sirve el proyecto).
-Interes. (Que tanto me intereza el proyecto).
-Automatizacion. (Que tanto se puede automatizar).
-Costo (Que tantos recursos me costaria realizarlo).

1.2 Posibles proyectos:
-
El primer proyecto posible es un sistema al cual se le ingrese la tasa de radiacion de la fuente, la distancia a la que se mide la tasa, la distancia a la que esta del objeto a irradiar, la temperatura y la humedad objetivo, la cantidad de radiacion que se busque obtener y la tasa efectiva de absorcion (grado de exposicion a la fuente), cada valor tendria su forma paralela e individual de configurarlo. Todos estos valores se pueden mostrar y se podrian cambiar por la interfaz fisica y por la virtual.

Este proyecto es el más automatico, más practico, el que más me interesa pero a su vez es el que más cuesta y el más dificil de hacer.

El segundo proyecto es un sistema al cual se le ingrese la tasa, la distancia a la que se mide la tasa, la distancia del objeto a la fuente, la temperatura minima objetivo, la humedad minima objetivo y la radiacion absorbida minima/objetivo. Estos valores se pueden configurar individualmente de forma virtual y fisica, pero de esta ultima no de forma paralela. La cantidad de radiacion que se absorbe debe ser controlada por el usuario manualmente. Los datos se muestran completamente por software (menos la radiacion que es una estimacion). Fisicamente, solamente se muestra cuando se esta fuera del rango.

Este proyecto es un punto medio de todo y me interesa casi lo mismo con el primero.

El tercer proyecto es un sistema al cual se le puede configurar la tasa, la distancia a la que se mide la tasa, la distancia del objeto a la fuente, una temperatura minima, la radiacion absorbida minima y si esta en el rango de irradiacion o no. La humedad, la temperatura y la cantidad de radiacion absorbida (estimada).

Este proyecto es el que menos me cuesta, el más facil y es el que más bajo puntua en el resto.

1.3 Seleccion del proyecto:
-

Selecciono el segundo proyecto por que pienso que tiene el mejor costo/beneficio de los tres. 

1.4 Descripcion detallada del proyecto elegido:
-



2 Elcitación de requisitos y casos de uso:
-

Requisitos:
1. Exposición:
El sistema controlará la exposición a la fuente mediante un servo motor

2. Control de exposición:

El sistema controlará el grado de exposición con la distancia al sensor, si se selecciona este método. 

3. Temperatura:
El sistema controlará que la temperatura sea mayor que la pedida con un cooler apuntado hacia el sistema y una resistencia calefactora.

4. Humedad 
El sistema controlará que la humedad sea menor a la seleccionada con un cooler apuntando en contra del sistema.

5. Indicadores:
El sistema contará con indicadores para mostrar que se está configurando 
El sistema contará con indicadores para mostrar si  esta dentro de los rangos
6. Motor
El sistema contará con un motor para cambiar el grado de exposición
7. Calentar
El sistema contará con una resistencia calefctora para calentar.
8. Coolers
El sistema contará con un cooler apuntando al sistema para mandar el aire caliente.
El sistema contará con un cooler apuntando en contra al sistema para que funcione como extractor.
Ambos coolers no podrán funcionar al mismo tiempo.
9. Comunicación Bluetooth:
El sistema se conectara a un celular mediante Bluetooth.
El celular podrá enviar comandos y recibir información.
El sistema mandara la información pedida y seguira los comando recibidos.
Cada vez que haya un cambio se mandara una actualización al celular.
10. Comunicación serie:
El sistema recibirá comandos y manda información por un puerto serie.
11. Aplicación:
La aplicación mostrará un estimacion de la radiacion absorbida. 
La aplicación mostrará la tasa efectiva 
La aplicación mostrará todos los valores medios y configurados
La aplicación servirá para configurar cada aspecto posible del sistema.
12. Sensores:
El sistema contará con un sensor de distancia para la interfaz de usuario
El sistema contará con un sensor de temperatura y humedad
13. Botones:
El sistema contará con dos botones para cambiar que se configura, un botón para cambiar el estado de lo seleccionado.


Caso 1:
Disparador:
El usuario quiere controlar el grado de exposicion del sistema manualmente y controlar lo demás de forma automatica.
Precondiciones:
EL sistema esta conectado a bluetooth, las conexiones fisicas estan correctamente conectadas.
Flujo principal:
-Se inicia en modo configuracion.
-Se configura cada modulo por separado.
-Se cambia a modo funcionamiento.
-Se usa el sensor de distancia para variar el grado de exposicion a la fuente.
-Cuando se llegue a la dosis absoribda configurada se cambia el grado de exposicion a 0.
Flujo alternativo:
1-Se configura todo por el puerto serie por bluetooth con el modulo de distancio activado.
2-Se apaga el modulo de distancia y se configura el grado de exposicion de forma remota.
-Cuando se llegue a la dosis absoribda configurada se cambia el grado de exposicion a 0.


Caso 2:
Disparador:
El usuario quiere solamente ingresar los datos iniciales o objetivos del sistema de forma remota y que todo funcione solo.
Precondiciones:
EL sistema esta conectado a bluetooth, las conexiones fisicas estan correctamente conectadas y los datos inciales o objetivos estan cargados de forma remota.
Flujo principal:
-Después de cargarse los datos se cambia el modo del sistema a funcionamiento por el puerto serie o la conexion bluetooth.
-Cuando se llegue a la dosis absoribda configurada se cambia el grado de exposicion a 0.
Flujo alternativo:
-Se inicia en modo configuracion.
-Se pulsa el boton de enter sin cambiar de seleccion
-Cuando se llegue a la dosis absoribda configurada se cambia el grado de exposicion a 0.

Caso 3:
Disparador:
El usuario quiere controlar aspectos del sistema de forma aislada.
Precondiciones:
EL sistema esta conectado a bluetooth, las conexiones fisicas estan correctamente conectadas.
Flujo principal:
-Se inicia el sistema en modo configuracion
-Se apagan los modulos que no se necesiten
-Se configura el/los modulos que se usen.
-Cuando se llegue a la dosis absoribda configurada se cambia el grado de exposicion a 0.
Flujo alternarivo:
-Con la aplicacion o por la computadora se modifica todo.
-Cuando se llegue a la dosis absoribda configurada se cambia el grado de exposicion a 0.
