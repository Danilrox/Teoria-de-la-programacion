#include <stdio.h>

void calcularValorRecaudado(int clientes);
void calcularValorCliente(float *total);

int main() {
  int cantidadClientes;

  printf("Cantidad de clientes a atender: ");
  scanf("%i", &cantidadClientes);

  calcularValorRecaudado(cantidadClientes);

  return 0;
}

void calcularValorRecaudado(int cantidadClientes) {
  float total = 0;
  int i;

  for (i = 1; i <= cantidadClientes; i++) {
    printf("\n");
    printf("CLIENTE %i\n", i);
    calcularValorCliente(&total);
  }

  printf("\nEl valor final recaudado por todas las atenciones es: %.2f\n", total);
}

void calcularValorCliente(float *total) {
  const float playStation = 2.50, xbox = 2.00, nintendo = 1.50;
  int consola, horas;
  float precio = 0, valorAPagar;

  // Validación de consola
  do {
    printf("Ingresa la consola (1=PlayStation, 2=Xbox, 3=Nintendo): ");
    scanf("%d", &consola);

    if (consola < 1 || consola > 3) {
      printf("Opción inválida\n");
    }
  } while (consola < 1 || consola > 3);

  // Asignar precio por consola
  if (consola == 1)
    precio = playStation;
  else if (consola == 2)
    precio = xbox;
  else
    precio = nintendo;

  printf("Ingresa la cantidad de horas que jugaste: ");
  scanf("%d", &horas);

  valorAPagar = precio * horas;
  *total += valorAPagar;

  printf("El valor a pagar es: %.2f\n", valorAPagar);
}

