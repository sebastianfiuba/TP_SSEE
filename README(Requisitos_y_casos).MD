Título: Sistema de control de dosis de radiacion. 

Alumno: Sebastián Andrada

Objetivo: Desarrollar un sistema que controle la temperatura, humedad y el angulo de exposicion de un objeto usando una interfaz de usuario de software y fisica.

Descripción inicial: 

El sistema debe controlar a que tanta radiacion esta expuesto un dispositivo sin tocarlo (sin necesariamente medir la radiacion), su temperatura minima y la humedad maxima de su entorno. 

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
      <td>Puntaje maximo</td>
      <td>-5</td>
      <td>5</td>
      <td>10</td>
      <td>5</td>
      <td>-10</td>
    </tr>
 </tbody>
</table>

1.2 Posibles proyectos:
-
1.2.1 Proyecto Nro 1:
-

El primer proyecto posible es un sistema al cual se le ingrese la tasa de radiacion de la fuente, la distancia a la que se mide la tasa, la distancia a la que esta del objeto a irradiar, la temperatura y la humedad objetivo, la cantidad de radiacion que se busque obtener y a que velocidad se obtiene, cada valor tendria su forma paralela e individual de configurarlo. Todos estos valores se pueden mostrar y se podrian cambiar por la interfaz fisica y por la virtual. 

Este proyecto es el más automatico, más practico, el que más me interesa pero a su vez es el que más cuesta y el más dificil de hacer, su dificultad se incrementa mucho cuando se pide la velocidad ya que habría que tomar en cuenta muchas variables extras y hacer una realimentacion para ver en que parte de la curva de decaimiento se encuentra, ahí se debe linealizar cambiando el grado de exposición. El costo también incrementa ya que es necesario un dosimetro. 

1.2.2 Proyecto Nro 2:
-

El segundo proyecto es un sistema al cual se le ingrese la tasa, la distancia a la que se mide la tasa, la distancia del objeto a la fuente, la temperatura minima objetivo, la humedad minima objetivo y la radiacion absorbida minima/objetivo. Estos valores se pueden configurar individualmente de forma virtual y fisica, pero de esta ultima no de forma paralela. La cantidad de radiacion que se absorbe debe ser controlada por el usuario manualmente. Los datos se muestran completamente por software (menos la radiacion que es una estimacion). Fisicamente, solamente se muestra cuando se esta fuera del rango.

Este proyecto es un punto medio de dificultad y costo y me interesa casi lo mismo con el primero.

1.2.3 Proyecto Nro 3:
-

El tercer proyecto es un sistema al cual se le puede configurar la tasa, la distancia a la que se mide la tasa, la distancia del objeto a la fuente, una temperatura minima, la radiacion absorbida minima y si esta en el rango de irradiacion o no. La humedad, la temperatura y la cantidad de radiacion absorbida (estimada).

Este proyecto es el que menos me cuesta, el más facil y es el que más bajo puntua en el resto.

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

El proyecto se iniciará en un modo configuración, en el mismo se podrá seleccionar que modulo se quiere configurar. Las opciones de cada modulo son: Activado, Valor máximo, Desactivado. Si se selecciona el sistema se podrá seleccionar entre 
activo, configuración, apagado.
El dispositivo Bluetooth se podrá enlazar solamente si se activa el modulo y se pone en modo de emparejamiento. 
Todos los datos se podrán ver por la aplicación y el puerto serie.

2 Elcitación de requisitos y casos de uso:
-

Hay muchos mercados para este tipo de sistemas pero la aplicación de este en particular es la investigación. Se está buscando tener un ambiente controlado para irradiar un dispositivo y a su vez medir los efectos del mismo. Si el proyecto uno se hubiera seleccionado el proyecto uno el análisis de estos efectos se podría hacer en el mismo sistema. También se podrian hacer caracterizaciones de dosimetros.
Este sistema respondería a una necesidad en particular y por lo tanto no tendría una competencia directa. Sin embargo, los dispositivo que se usan comercialmente son más sofisticados y tienen otros estándares por lo que el costo aumentaría mucho más.

2.1 Tabal de requisitos:
-

| Sección                     | Descripción                                                                 |
|----------------------------|------------------------------------------------------------------------------|
| 1. Exposición              | El sistema controlará la exposición a la fuente mediante un servo motor.    |
| 2. Control de exposición   | El sistema controlará el grado de exposición con la distancia al sensor, si se selecciona este método. |
| 3. Temperatura             | El sistema controlará que la temperatura sea mayor que la pedida con un cooler apuntado hacia el sistema y una resistencia calefactora. |
| 4. Humedad                 | El sistema controlará que la humedad sea menor a la seleccionada con un cooler apuntando en contra del sistema. |
| 5. Indicadores             | El sistema contará con indicadores para mostrar que se está configurando.   |
|              | El sistema contará con indicadores para mostrar si está dentro de los rangos. |
| 6. Motor                   | El sistema contará con un motor para cambiar el grado de exposición.        |
| 7. Calentar                | El sistema contará con una resistencia calefactora para calentar.           |
| 8. Coolers                 | El sistema contará con un cooler apuntando al sistema para mandar el aire caliente. |
|                 | El sistema contará con un cooler apuntando en contra al sistema para que funcione como extractor. |
|                 | Ambos coolers no podrán funcionar al mismo tiempo.                          |
| 9. Comunicación Bluetooth  | El sistema se conectará a un celular mediante Bluetooth.                    |
|   | El celular podrá enviar comandos y recibir información.                     |
|   | El sistema mandará la información pedida y seguirá los comandos recibidos. |
|   | Cada vez que haya un cambio se mandará una actualización al celular.       |
| 10. Comunicación serie     | El sistema recibirá comandos y mandará información por un puerto serie.     |
| 11. Aplicación             | La aplicación mostrará una estimación de la radiación absorbida.           |
|              | La aplicación mostrará la tasa efectiva.                                    |
|              | La aplicación mostrará todos los valores medios y configurados.            |
|              | La aplicación servirá para configurar cada aspecto posible del sistema.    |
| 12. Sensores               | El sistema contará con un sensor de distancia para la interfaz de usuario. |
|                | El sistema contará con un sensor de temperatura y humedad.                 |
| 13. Botones                | El sistema contará con dos botones para cambiar qué se configura. |
|                | El sistema contará con un botón para cambiar el estado de lo seleccionado. |

2.2 Casos de aplicacion:
-
2.2.1 Caso 1:
-
| Elemento              | Definicion                                                                 |
|----------------------|-------------------------------------------------------------------------|
| Disparador           | El usuario quiere controlar el grado de exposición del sistema manualmente y controlar lo demás de forma automática. |
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

