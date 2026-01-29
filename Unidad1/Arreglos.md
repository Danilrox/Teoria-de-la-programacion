## 📚 ARREGLOS
## [↩️ Volver a la Unidad 3](Unidad3.md)
- Los arreglos (o arrays) en programación son estructuras de datos que permiten almacenar varios datos del mismo tipo bajo un mismo nombre. Cada dato que forma parte del arreglo se denomina elemento.
- Los elementos estan organizados en posiciones consecutivas de memoria. Cada dato se identifica mediante un índice, que indica su posición dentro del arreglo.

## 🗂️ Tipos de arreglos

## 📚 Unidimensional
<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/1319feda-fad1-4e2a-9026-96ab8cf7c323" />

- Solo tiene una fila y columnas, llamados vector o lista.
- Las posiciones del arreglo son llamadas índices y siempre empiezan en cero.
- Como declarar un arreglo unidimensional en C:

```
<Tipo de dato> <Identifcador> [<numero del elemento>]
```

### Ejemplo:
```c
#include <stdio.h>

int main() {
    int numeros[4] = {5, 10, 15, 20}; // Arreglo de una dimension y 4 datos.

    // Bucle for para imprimir todos los elementos del arreglo
    for (int i= 0; i < 5; i++) 
    {
        printf("Elemento en la posicion: %i: %i\n", i, lista[i]);
    }

    return 0;
}
```
### Explicaciòn:
- La función main es el punto de entrada del programa; aquí comienza la ejecución.
- Se declara un arreglo unidimensional de tipo entero.
- El arreglo tiene 4 elementos, almacenados en posiciones consecutivas de memoria.
- La asignación queda así:
```
numeros[0] = 5
numeros[1] = 10
numeros[2] = 15
numeros[3] = 20
```
- Se declara una variable de control i, inicializada en 0.
- El bucle se ejecuta mientras i < 5.
- En cada iteración, i aumenta en 1.
- El objetivo del bucle es recorrer el arreglo para mostrar cada uno de sus elementos.
- Finalmente se imprime cada dato con su respectivad posiciòn.

--- 

## 📚📚 Bidimensional 
<img width="480" height="360" alt="image" src="https://github.com/user-attachments/assets/c54009c7-4aca-4644-a166-5c60df759947" />

- Tiene vairas filas y columnas, llamados tambien matriz.
- La representación es m[i][j], donde i es el número de filas y j número de columnas.
- Como declarar un arreglo bidimensional e C:

```
<Tipo de dato> <Identifcador> <[numero del filas]> <[numero de columnas]>
```
### Ejemplo:
```c
int main() {
    int matriz [3][4]; // Arreglo bidimensional y 12 datos
    matriz [0][0] = 1;
    matriz [0][1] = 5;
    matriz [0][2] = 8;
    matriz [0][3] = 3;
    matriz [1][0] = 2;
    matriz [1][1] = 3;
    matriz [1][2] = 6;
    matriz [1][3] = 8;
    matriz [2][0] = 5;
    matriz [2][1] = 7;
    matriz [2][2] = 9;
    matriz [2][3] = 4;

    // Bucle for para imprimir toda la martriz bidimensional 
    for (int i= 0; i < 3; i++)
    {
        for (int j= 0; j < 4; j++)
        {
            printf("Elemento en la posicion (fila %i y columna %i): %i\n", i, j, matriz[i][j]);
        }
    }
    return 0;
}
```
### Explicaciòn:
- La funciòn main() marca el inicio del programa
- Se declara una matriz bidimensional de tipo entero.
- La matriz tiene 3 filas y 4 columnas, lo que equivale a 12 elementos en total.
- Se asigna los valores a la matriz.
- El primer bucle for (i) recorre las filas de la matriz.
- El segundo bucle for (j) recorre las columnas de cada fila.
- Gracias a los bucles anidados, se accede a todos los elementos de la matriz.
- El recorrido se realiza fila por fila, de izquierda a derecha y se imprime cada dato en la terminal.

---

### 📚📚📚 Tridimensional
<img width="514" height="361" alt="image" src="https://github.com/user-attachments/assets/2f3dfcb4-5329-4606-a701-ed9a1351a15a" />

- Tiene enemos filas, columnas, y de profundidad.
- La representación es m[i][j][k], donde i es la profundidad, j el número de filas y k el número de columnas.
- Como declarar un arreglo tridimensional en C:
```
<Tipo de dato> <Identifcador> <[numero de capas]> <[numero del filas]> <[numero de columnas]>
```
### Ejemplo
```c
#include <stdio.h>

int main() {
int cubo [2][3][2]; // Arreglo tridimensional con 3 capas

    cubo [0][0][0] = 1;
    cubo [0][0][1] = 5;
    cubo [0][1][0] = 8;
    cubo [0][1][1] = 3;
    cubo [0][2][0] = 2;
    cubo [0][2][1] = 3;

    cubo [1][0][0] = 6;
    cubo [1][0][1] = 8;
    cubo [1][1][0] = 8;
    cubo [1][1][1] = 5;
    cubo [1][2][0] = 7;
    cubo [1][2][1] = 9;

    // Bucle for para imprimir todo los datos del arreglo tridimensional
    for (int i= 0; i < 3; i++)
    {
        for (int j= 0; j < 4; j++)
        {
            for (int k= 0; k < 3; k++) 
            {
                printf("Elemento en la posicion (capa: %i, fila %i y columna %i): %i\n", i, j, k, cubo[i][j][k]);
            }
        }
    }
    return 0;
}
```
### Explicaciòn:
- La ejecución del programa comienza en la función main.
- Se declara un arreglo tridimensional de tipo entero.
- Dimensiones del arreglo: 2 capas, 3 filas y 2 columnas.
- Se asgina valores al arreglo:  cubo [0][0][0] = 1; .....
- Se usan tres bucles anidados para recorrer el arreglo tridimensional:
- i → capas
- j → filas
- k → columnas
- El objetivo es imprimir todos los elementos del arreglo.
- Se imprimen todos los valores en terminal.





