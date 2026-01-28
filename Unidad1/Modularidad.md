## 🗂️ Modularidad
## [↩️ Volver a la Unidad 3](Unidad3.md)
Cuando tenemos algoritmos largos y complejos, una técnica para reducir la complejidad es dividir el programa grande en subprogramas pequeños.
En programación, a esta técnica se la conoce como modularización (paradigma de programación). Estos módulos reciben el nombre de: procesos, funciones, etc.


### 📦 Funciones: 
- Una función es un conjunto de sentencias que realiza una tarea determinada, responde a un propósito único e identificable.
- En el lenguaje se puede determinar dos tipos de funciones las que están predeterminadas por el lenguaje, por ejemplo, librerías #include <stdio.h>, y las que están definidas por el desarrollador.
- Para que las funciones se ejecuten deben estar ancladas a un programa principal (main).
<img width="903" height="625" alt="image" src="https://github.com/user-attachments/assets/e82fdfbf-aedd-466b-9682-dcab46e083c3" />
<br>
<br>

### 🧱 Estrucutura de una funcion:
```
<Tipo de dato><identificador>(Lista de parametros)
{
Variables locales

Cuerpo de la funcion

dato de retorno
}
```
### Ejemplo de programaciòn modular:

```
#include <stdio.h>

// Módulo que suma dos números
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = sumar(3, 5); // Llamada al módulo
    printf("Resultado: %d\n", resultado);
    return 0;
}
```
En el presente ejemplo se creó la funcion sumar que realiza la funcion de sumar dos numeros enteros y retorna su respuesta. Dentro de la funcion main se llama a la funcion sumar y se impreme la respuesta en la terminal.

---

## 📤 Pase de parametros:
el mecanismo que permite que los módulos (funciones) se comuniquen entre sí, enviándose información para poder trabajar juntos sin depender directamente de variables globales.

### 📄➡️📄 Pase de parametros por valor
Es una forma de comunicación entre módulos (funciones) en la que se envía una copia del dato original a la función. Esto significa que cualquier cambio que se realice dentro de la función no afecta a la variable original que se encuentra en el programa principal. Este tipo de pase de parámetros se usa cuando se desea que cada módulo trabaje de manera independiente, sin modificar los datos externos, lo que ayuda a mantener el código más seguro y controlado. Ejemplo:

```
#include <stdio.h>

// Módulo que intenta modificar el valor
void aumentar(int x) {
    x = x + 5;   // Solo se modifica la copia
}

int main() {
    int numero = 10;

    aumentar(numero);   // Se pasa el valor, no la dirección
    printf("Numero final: %d\n", numero); // Sigue siendo 10

    return 0;
}
```

### 📍➡️📦 pase de parámetros por referencia 
Es una forma de comunicación entre módulos (funciones) en la que no se envía una copia del dato, sino la dirección de memoria de la variable original. Gracias a esto, la función puede modificar directamente el valor de esa variable.
En programación modular, este tipo de pase de parámetros se usa cuando un módulo necesita devolver cambios a otro módulo, manteniendo el código organizado sin recurrir a variables globales. Ejemplo:

```
#include <stdio.h>

// Funcion que duplica el valor original
void duplicar(int *x) {
    *x = *x * 2;
}

int main() {
    int numero = 5;
    duplicar(&numero);   // Se pasa la dirección
    printf("%d\n", numero); // Imprime 10
    return 0;
}

```







 

