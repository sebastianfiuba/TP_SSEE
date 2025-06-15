Título: Sistema de control de dosis de radiación. 

Alumno: Sebastián Andrada

Objetivo: Desarrollar un sistema que controle la temperatura, humedad y el angulo de exposicion de un objeto usando una interfaz de usuario de software y fisica.

Descripción inicial: 

El sistema debe controlar a que tanta radiación esta expuesto un dispositivo sin tocarlo (sin necesariamente medir la radiación), su temperatura minima y la humedad maxima de su entorno. 

1 Seleccion:
-

1.1 Criterios de seleccion:
-
Para hacerlo se propone, como minimo, tres proyectos que cumplan el objetivo, sean realizables y se diferencien por los siguientes criterios:

1.1.1 Explicacion de cada criterio:
-

-Dificultad: Que tan dificil es realizar e impletar el proyecto, dentro de esta categoria entra que tan complejo es el sistema y la cantidad de problemas que se deberian resolver.
-Practicidad: Que tanto sirve el proyecto, este criterio se refiere a si se cumplen los objetivos generales del sistema.
-Interes: Que tanto me intereza el proyecto.
-Automatizacion: Que tanto se puede automatizar, esta evaluacion responde al grado de automatizacion del proyecto.
-Costo: Que tantos recursos me costaria realizarlo, el alcance de este criterio va desde tiempo que se invierte a capital requerido.
 
1.1.2 Peso de cada criterio:
-
Cada criterio tiene un peso que se muestra en la siguiente tabla. Como la dificultad y el costo son criterios negativos (esto significa que no es deseable que cueste más o que sea más dificil) su valor de peso es negativo. El resto de los criterios son positivos. Cada peso varia entre 5 y 10 en módulo. Los que valen 10 considero que son factores críticos. En este caso considero que el interes que me genera el proyecto y cuanto capital y tiempo me cuesta pesa más que el resto de criterios.
<table>
  <thead>
    <tr>
      <th>Criterios</th>
      <th>Dificultad</th>
      <th>Practicidad</th>
      <th>Interés</th>
      <th>Automatización</th>
      <th>Costo</th>
    </tr>
  </thead>
<tbody>
    <tr>
      <td>Puntaje máximo</td>
      <td>-5</td>
      <td>5</td>
      <td>10</td>
      <td>5</td>
      <td>-10</td>
    </tr>
 </tbody>
</table>


Como se puede observar en la tabla anterior el mejor puntaje es de 20 y el peor de -15. Sin embargo, estos son casos extremos y en la realidad espero ver valores cercanos a 5.



1.2 Posibles proyectos:
-

1.2.1 Proyecto Nro 1:
-

El primer proyecto posible es un sistema al cual se le ingrese la tasa de radiación de la fuente, la distancia a la que se mide la tasa, la distancia a la que esta del objeto a irradiar, la temperatura y la humedad objetivo, la cantidad de radiación que se busque obtener y a que velocidad se obtiene, cada valor tendria su forma paralela e individual de configurarlo. Todos estos valores se pueden mostrar y se podrian cambiar por la interfaz fisica y por la virtual. Este sistema tiene un sensor de radiación que ayuda a calibrar cual es la dosis absorbida y cual es la tasa efectiva de radiación.    

Este proyecto es el más automatizable, el más practico, el que más me interesa pero a su vez es el que más cuesta y el más dificil de hacer, su dificultad se incrementa mucho cuando se pide la velocidad ya que habría que tomar en cuenta muchas variables extras y hacer una realimentacion para ver en que parte de la curva de decaimiento se encuentra, ahí se debe linealizar cambiando el grado de exposición. El costo también incrementa ya que es necesario un dosimetro. 

1.2.2 Proyecto Nro 2:
-

El segundo proyecto es un sistema al cual se le ingrese la tasa de radiación de la fuente, la distancia a la que se mide la tasa, la distancia del objeto a la fuente, la temperatura minima objetivo, la humedad minima objetivo y la radiación absorbida minima/objetivo. Estos valores se pueden configurar individualmente de forma virtual y fisica, pero de esta última no de forma paralela. La cantidad de radiación que se absorbe debe ser controlada por el usuario manualmente. Los datos se muestran completamente por software (menos la radiación que es una estimacion). Fisicamente, solamente se muestra cuando se esta fuera del rango.

Este proyecto es un punto medio de dificultad y costo y me interesa casi lo mismo con el primero ya que es una simplificacion que cumple con las mismas funciones basicas. Las tres grandes diferencias con el primer proyecto son que no tiene un sensor de radiación, la tasa efectiva de radiación se debe configurar manualmente y la forma en la que se configura/visualiza todo.

1.2.3 Proyecto Nro 3:
-

El tercer proyecto es un sistema al cual se le puede configurar la tasa de radiación de la fuente, la distancia a la que se mide la tasa, la distancia del objeto a la fuente, una temperatura minima, la radiación absorbida minima. La humedad es una variable que solamente se muestra. La temperatura es lo unico que se puede configurar de forma manual. Se estima la radiación absorbida y al llegar al umbral se retira del rango de la fuente.

Este proyecto es el que menos cuesta capital y tiempo, el más facil y es el que más bajo puntua en el resto. 

1.3 Seleccion del proyecto:
-
Los puntajes en los criterios de los proyectos son los siguientes
<table>
  <thead>
    <tr>
      <th>Proyecto</th>
      <th>Dificultad</th>
      <th>Practicidad</th>
      <th>Interés</th>
      <th>Automatización</th>
      <th>Costo</th>
      <th>Total</th>
    </tr>
  </thead>
<tbody>
    <tr>
      <td>Proyecto 1</td>
      <td>-4</td>
      <td>4</td>
      <td>10</td>
      <td>4</td>
      <td>-9</td>
      <td>5</td>
    </tr>
    <tr>
      <td>Proyecto 2</td>
      <td>-3</td>
      <td>3</td>
      <td>9</td>
      <td>3</td>
      <td>-6</td>
      <td>6</td>
    </tr>
    <tr>
      <td>Proyecto 3</td>
      <td>-1</td>
      <td>2</td>
      <td>5</td>
      <td>2</td>
      <td>-4</td>
      <td>4</td>
    </tr>
 </tbody>
</table>

Selecciono el segundo proyecto por que pienso que tiene el mayor puntaje y el mejor costo/beneficio de los tres. 

1.4 Descripcion detallada del proyecto elegido:
-
El sistema tendra tres modos: activo, configuración, apagado.
Cuando el proyecto se prenda con el boton de seleccion y mientras este apagado el mismo se iniciará en un modo configuración y se podrá seleccionar que módulo se quiere configurar. Las opciones de cada modulo son: Activado, Valor máximo/Emparejamiento, Desactivado. En este modo el sistema también es una opcion y se podra configurar su modo. 
Si el sistema esta en modo activo el boton de seleccion lo manda a modo configuración. 
Si el boton de selección se presiona por 5 segundos en el modo activo o en el modo configuración con el módulo sistema seleccionado el sistema se apaga.
El dispositivo Bluetooth se podrá enlazar solamente si se activa el módulo y se pone en modo de emparejamiento. 
Todos los datos se podrán ver por la aplicación y el puerto serie.
Para cambiar la tasa de radiación efecitva de la fuente que ve el objetivo se usa un servomotor y se configura por software o manualmente. Si se configura de forma manual se hace usando el sensor de distancia que toma como valor maximo 50 cm (tasa real de la fuente) y como minimo 5 cm (0% de la tasa real) . 
2 Elcitación de requisitos y casos de uso:
-

Hay muchos mercados para este tipo de sistemas pero la aplicación de este en particular es la investigación. Se está buscando tener un ambiente controlado para irradiar un dispositivo y a su vez medir los efectos del mismo. Si el proyecto uno se hubiera seleccionado el análisis de estos efectos se podría hacer en el mismo sistema, como también se podrían hacer caracterizaciones de dosímetros.
Los sistemas de control que se usan comercialmente son más sofisticados y tienen otros estándares por lo que el costo aumentaría mucho más. Son hechos a medida y solamente los pueden adquirir instituciones aprobadas para el manejo de radiación ya que usualmente vienen con la fuente. Sin embargo, en este caso se asume que el usuario tiene una fuente, se estima la radiación y se resuelve una necesidad en particular, por lo tanto no tendría una competencia y no podria ser comparado.


2.1 Tabla de requisitos:
-

| Sección                     | Descripción                                                                 |
|----------------------------|------------------------------------------------------------------------------|
| 1. Exposición              | El sistema controlará la exposición a la fuente del objetivo a irradiar mediante un servo motor.    |
| 2. Control de exposición   | El sistema controlará el grado de exposición de la fuente con la distancia al sensor o por software, dependendiendo el método seleccionado. |
| 3. Temperatura             | El sistema controlará que la temperatura sea mayor a un 10% que la pedida con un cooler apuntado hacia el sistema y una resistencia calefactora. |
| 4. Humedad                 | El sistema controlará que la humedad sea menor a un 10% a la seleccionada con un cooler apuntando en contra del sistema. |
| 5. Indicadores             | El sistema contará con alguna forma de mostrar con LEDs de forma independiente que variable a controlar manualmente se está configurando. Esto puede funcionar solo cuando el sistema este en modo configuracion. |
|              |El sistema contará con indicadores LED para mostrar si está dentro de los rangos de cada variable a controlar de forma independiente. Esto puede funcionar solo cuando el sistema este en modo activo.|
|              |El sistema contara con un indicador LED que muestre en que modo esta el sistema. |
| 6. Motor                   | El sistema contará con un motor para cambiar el grado de exposición.        |
| 7. Calentar                | El sistema contará con una resistencia calefactora para calentar.           |
| 8. Coolers                 | El sistema contará con un cooler apuntando al sistema para mandar el aire caliente. |
|                 | El sistema contará con un cooler apuntando en contra al sistema para que funcione como extractor. |
|                 | Ambos coolers no podrán funcionar al mismo tiempo.                          |
| 9. Comunicación Bluetooth  | El sistema se conectará a un celular mediante Bluetooth.                    |
|   | El celular podrá enviar comandos y recibir información.                     |
|   | El sistema mandará la información pedida y seguirá los comandos recibidos. |
|   | Cada vez que haya un cambio se mandará una actualización al celular.       |
|   | Se usara el protocolo de Bluetooth clásico.       |
| 10. Comunicación serie     | El sistema recibirá comandos y mandará información por un puerto serie.     |
|              |Recibira comandos no evitables sobre que hacer con los perifericos del sistema y/o las variables iniciales.                               |
|              |Mandara informacion sobre las variables a controlar y el estado de los perifericos del sistema.                        |
| 11. Aplicación             | La aplicación mostrará una estimación de la radiación absorbida.           |
|              | La aplicación mostrará la tasa efectiva.                                    |
|              | La aplicación mostrará todos los valores medios y configurados.            |
|              | La aplicación servirá para configurar cada aspecto posible del sistema.    |
| 12. Sensor de Distancia              | El sistema contará con un sensor de distancia para la interfaz de usuario, el rango del mismo sera 50 cm como máximo y 5 cm como mínimo. |
|              | El sensor debera ser el Hc-sr04.    |
|   13. Sensor de Temperatura y Humedad             | El sistema contará con un sensor de temperatura y humedad.                 |
|              | El sensor debera ser el DHT11.    |
| 14. Botones                | El sistema contará con dos botones para cambiar qué se configura. |
|                | El sistema contará con un botón para cambiar el estado de lo seleccionado. |

2.2 Casos de aplicacion:
-
2.2.1 Caso 1:
-
| Elemento              | Definicion                                                                 |
|----------------------|-------------------------------------------------------------------------|
| Disparador           | El usuario quiere controlar el grado de exposición de la fuente al objetivo del sistema manualmente y controlar lo demás de forma automática. |
| Precondiciones       | El sistema está conectado a Bluetooth, las conexiones físicas están correctamente conectadas. |
| Flujo principal      | Se inicia en modo configuración.                                        |
|       | Se configura cada módulo por separado.                                  |
|       | Se cambia a modo funcionamiento.                                        |
|       | Se usa el sensor de distancia para variar el grado de exposición a la fuente. |
|       | Cuando se llegue a la dosis absorbida configurada se cambia el grado de exposición a 0. |
| Flujo alternativo    | (1) Se configura todo por el puerto serie por Bluetooth con el módulo de distancia activado. |
|     | (2) Se apaga el módulo de distancia y se configura el grado de exposición de forma remota. |
|     | (1,2) Cuando se llegue a la dosis absorbida configurada se cambia el grado de exposición a 0. |

2.2.2 Caso 2:
-

| Elemento              | Definicion                                                                 |
|----------------------|-------------------------------------------------------------------------|
| Disparador           | El usuario quiere solamente ingresar los datos iniciales o objetivos del sistema de forma remota y que todo funcione solo. |
| Precondiciones       | El sistema está conectado a Bluetooth, las conexiones físicas están correctamente conectadas y los datos iniciales u objetivos están cargados de forma remota. |
| Flujo principal      | Después de cargarse los datos se cambia el modo del sistema a funcionamiento por el puerto serie o la conexión Bluetooth. |
|       | Cuando se llegue a la dosis absorbida configurada se cambia el grado de exposición a 0. |
| Flujo alternativo    | Se inicia en modo configuración.                                       |
|    | Se pulsa el botón de enter sin cambiar de selección.                   |
|     | Cuando se llegue a la dosis absorbida configurada se cambia el grado de exposición a 0. |

2.2.3 Caso 3:
-

| Elemento              | Definicion                                                                 |
|----------------------|-------------------------------------------------------------------------|
| Disparador           | El usuario quiere controlar aspectos del sistema de forma aislada.      |
| Precondiciones       | El sistema está conectado a Bluetooth, las conexiones físicas están correctamente conectadas. |
| Flujo principal      | Se inicia el sistema en modo configuración.                             |
|       | Se apagan los módulos que no se necesiten.                              |
|       | Se configura el/los módulos que se usen.                                |
|       | Cuando se llegue a la dosis absorbida configurada se cambia el grado de exposición a 0. |
| Flujo alternativo    | Con la aplicación o por la computadora se modifica todo.                |
|     | Cuando se llegue a la dosis absorbida configurada se cambia el grado de exposición a 0. |

