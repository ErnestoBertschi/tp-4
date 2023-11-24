#include <stdio.h>

#define TAM_ARREGLO 10

void intercambiar(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void ordenar_descendente(int arreglo[], int tam) {
	for (int i = 0; i < tam - 1; i++) {
		int indice_max = i;
		for (int j = i + 1; j < tam; j++) {
			if (arreglo[j] > arreglo[indice_max]) {
				indice_max = j;
			}
		}
		if (indice_max != i) {
			intercambiar(&arreglo[i], &arreglo[indice_max]);
		}
	}
}

int main() {
	int numeros[TAM_ARREGLO];
	
	printf("Ingrese %d números enteros:\n", TAM_ARREGLO);
	for (int i = 0; i < TAM_ARREGLO; i++) {
		printf("Número %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	ordenar_descendente(numeros, TAM_ARREGLO);
	
	printf("\nNúmeros ordenados en forma descendente:\n");
	for (int i = 0; i < TAM_ARREGLO; i++) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
	
	return 0;
}
