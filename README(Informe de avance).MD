 Título: Sistema de control de dosis de radiación. 


 Alumno: Sebastián Andrada



Metodo de control:
-
Para controlar el avance se propondra una nueva categoria en la tabla de requisitos llamada Avance. La misma tendra 3 posibles estados por requirimiento: Finalizado, Activo y En espera.  
"Finalizado" significa que ya se cumplio con el requsito en el proyecto, "Activo" significa que se esta en proceso de lograr el objetivo propuesto y "En espera" significa que todavia no se empezo con en item.

Tabla de requisitos:
-
| Sección                    | Descripción                                                                  | Avance     |
|----------------------------|------------------------------------------------------------------------------|------------|
| 1. Exposición              | El sistema controlará la exposición a la fuente del objetivo a irradiar mediante un servo motor.    | Activo. |
| 2. Control de exposición   | El sistema controlará el grado de exposición de la fuente con la distancia al sensor o por software, dependendiendo el método seleccionado. | Activo. |
| 3. Temperatura             | El sistema controlará que la temperatura sea mayor a un 10% que la pedida con un cooler apuntado hacia el sistema y una resistencia calefactora. | Activo.|
| 4. Humedad                 | El sistema controlará que la humedad sea menor a un 10% a la seleccionada con un cooler apuntando en contra del sistema. | Activo.|
| 5. Indicadores             | El sistema contará con alguna forma de mostrar con LEDs de forma independiente que variable a controlar manualmente se está configurando. Esto puede funcionar solo cuando el sistema este en modo configuracion. | Activo. |
|              |El sistema contará con indicadores LED para mostrar si está dentro de los rangos de cada variable a controlar de forma independiente. Esto puede funcionar solo cuando el sistema este en modo activo.| Activo. |
|              |El sistema contara con un indicador LED que muestre en que modo esta el sistema. | Activo. |
| 6. Motor                   | El sistema contará con un motor para cambiar el grado de exposición.        |  Finalizado. |
| 7. Calentar                | El sistema contará con una resistencia calefactora para calentar.           |  Activo. |
| 8. Coolers                 | El sistema contará con un cooler apuntando al sistema para mandar el aire caliente. |  Activo. |
|                 | El sistema contará con un cooler apuntando en contra al sistema para que funcione como extractor. | Activo. |
|                 | Ambos coolers no podrán funcionar al mismo tiempo.                          |  Activo. |
| 9. Comunicación Bluetooth  | El sistema se conectará a un celular mediante Bluetooth.                    | En espera. |
|   | El celular podrá enviar comandos y recibir información.                     |
|   | El sistema mandará la información pedida y seguirá los comandos recibidos. |
|   | Cada vez que haya un cambio se mandará una actualización al celular.       |
|   | Se usara el protocolo de Bluetooth clásico.       |
| 10. Comunicación serie     | El sistema recibirá comandos y mandará información por un puerto serie.     |  Finalizado. |
|              |Recibira comandos no evitables sobre que hacer con los perifericos del sistema y/o las variables iniciales.                               |
|              |Mandara informacion sobre las variables a controlar y el estado de los perifericos del sistema.                        |
| 11. Aplicación             | La aplicación mostrará una estimación de la radiación absorbida.           | En espera. |
|              | La aplicación mostrará la tasa efectiva.                                    |
|              | La aplicación mostrará todos los valores medios y configurados.            |
|              | La aplicación servirá para configurar cada aspecto posible del sistema.    |
| 12. Sensor de Distancia              | El sistema contará con un sensor de distancia para la interfaz de usuario, el rango del mismo sera 50 cm como máximo y 5 cm como mínimo. |  Finalizado. |
|              | El sensor debera ser el Hc-sr04.    |
|   13. Sensor de Temperatura y Humedad             | El sistema contará con un sensor de temperatura y humedad.                 |  Finalizado. |
|              | El sensor debera ser el DHT11.    |
| 14. Botones                | El sistema contará con dos botones para cambiar qué se configura. |  Finalizado. |
|                | El sistema contará con un botón para cambiar el estado de lo seleccionado. |  Finalizado. |
