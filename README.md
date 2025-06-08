# ProyectofinalRegiJin
# Modelado de Servicio de Streaming

En los últimos años, han proliferado los servicios de streaming de video bajo demanda, por ejemplo: **Netflix**, **Disney+**, **DC**, entre otros.  
Algunos de ellos se especializan en el volumen de videos que proporcionan a sus usuarios, mientras que otros se han puesto el reto de mostrar solamente videos de su propia marca.

Una versión limitada para apoyar a un futuro proveedor de este tipo de servicios es la que se describe a continuación:

## Descripción del Modelo

Se quiere trabajar con **dos tipos de videos**: **películas** y **series**.

Todo video tiene:

- un **ID**
- un **nombre**
- una **duración**
- un **género** (por ejemplo: drama, acción, misterio)

### Series

Las series contienen **episodios**, y cada episodio tiene:

- un **título**
- la **temporada** a la que pertenece

## Calificaciones

Nos interesa conocer la **calificación promedio** que ha recibido cada uno de los videos.  
Esta calificación está en una escala de **1 a 5**, donde **5** es la mejor calificación posible.

## Requerimientos del Sistema

El sistema debe ser capaz de:

- Mostrar **todos los videos** con sus calificaciones
- Mostrar los **episodios de una serie determinada** con sus calificaciones
- Mostrar las **películas** con sus calificaciones

---

## Preguntas de Análisis

- ¿Cuál sería el **diagrama de clases** que representaría la situación planteada?
- ¿Cómo emplearías los conceptos de **Programación Orientada a Objetos** como:
  - **Herencia**
  - **Polimorfismo**
  - **Sobrecarga de operadores**

  para construir el sistema de clases que facilitaría la solución del problema?

- ¿Podrías construir una aplicación que tome la información sobre los diferentes tipos de videos y genere reportes como:
  - películas de un cierto género
  - series de un cierto género
  - películas con su calificación?
