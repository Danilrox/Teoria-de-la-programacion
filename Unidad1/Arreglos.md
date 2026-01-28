## 📚 Arreglos
## [↩️ Volver a la Unidad 3](Unidad3.md)
- Los arreglos (o arrays) en programación son estructuras de datos que permiten almacenar varios datos del mismo tipo bajo un mismo nombre. Cada dato que forma parte del arreglo se denomina elemento.
- Los elementos estan organizados en posiciones consecutivas de memoria. Cada dato se identifica mediante un índice, que indica su posición dentro del arreglo.

### 🗂️ Tipos de arreglos

### 📚 Unidimensional
<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/1319feda-fad1-4e2a-9026-96ab8cf7c323" />
- Solo tiene una fila y columnas, llamados vector o lista.
- Las posiciones del arreglo son llamadas índices y siempre empiezan en cero.
- Como declarar un arreglo unidimensional en C:

```
<Tipo de dato> <Identifcador> [<numero del elemento>]
```

- Ejemplo:
```
#include <stdio.h>

int main() {
    int numeros[4] = {5, 10, 15, 20}; // Arreglo de 1 dimension con 4 datos.

    printf("Primer elemento: %d\n", numeros[0]); // Imprime el primer elemento del arreglo
    return 0;
}

```

### 📚📚 Bidimensional 
<img width="480" height="360" alt="image" src="https://github.com/user-attachments/assets/c54009c7-4aca-4644-a166-5c60df759947" />

- Tiene vairas filas y columnas, llamados tambien matriz.


