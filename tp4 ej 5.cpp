#include <stdio.h>

#define TAM_ARREGLO 10

void intercambiar(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void ordenar_ascendente(int arreglo[], int tam) {
	for (int i = 0; i < tam - 1; i++) {
		int indice_min = i;
		for (int j = i + 1; j < tam; j++) {
			if (arreglo[j] < arreglo[indice_min]) {
				indice_min = j;
			}
		}
		if (indice_min != i) {
			intercambiar(&arreglo[i], &arreglo[indice_min]);
		}
	}
}

int main() {
	int numeros[TAM_ARREGLO];
	
	printf("Ingrese %d n�meros enteros:\n", TAM_ARREGLO);
	for (int i = 0; i < TAM_ARREGLO; i++) {
		printf("N�mero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	ordenar_ascendente(numeros, TAM_ARREGLO);
	
	printf("\nN�meros ordenados en forma ascendente:\n");
	for (int i = 0; i < TAM_ARREGLO; i++) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
	
	return 0;
}
