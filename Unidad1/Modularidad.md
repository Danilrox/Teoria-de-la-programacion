## 🗂️ Modularidad
es una forma de programar donde un programa grande se divide en partes pequeñas e independientes, llamadas módulos, para que sea más fácil de entender, desarrollar y mantener.

### Modulo: 
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
En el presente ejemplo se creó el modulo sumar que realica la funcion de sumar dos numeros enteros y retorna su respuesta. Dentro de la funcion main se llama al moduulo sumar y se impreme la respuesta en la terminal6


