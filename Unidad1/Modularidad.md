## 🗂️ Modularidad
es una forma de programar donde un programa grande se divide en partes pequeñas e independientes, llamadas módulos, para que sea más fácil de entender, desarrollar y mantener.

### 📦 Modulo: 
Cada módulo se encarga de una tarea específica y puede ser una función, un archivo o un conjunto de funciones relacionadas; además, tiene una responsabilidad clara, puede reutilizarse en otros programas y probarse de manera independiente. 

Aqui se presenta un ejemplo practico de programacion modulada:

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
En el presente ejemplo se creó el modulo sumar que realica la funcion de sumar dos numeros enteros y retorna su respuesta. Dentro de la funcion main se llama al moduulo sumar y se impreme la respuesta en la terminal.

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







 

