#include <stdio.h>

#define TAM_ARREGLO 10

int main() {
	double numeros[TAM_ARREGLO];
	double suma_par = 0.0;
	double suma_impar = 0.0;
	double promedio_par = 0.0;
	double promedio_impar = 0.0;
	int cantidad_par = 0;
	int cantidad_impar = 0;
	
	printf("Ingrese %d números reales:\n", TAM_ARREGLO);
	for (int i = 0; i < TAM_ARREGLO; i++) {
		printf("Número %d: ", i + 1);
		scanf("%lf", &numeros[i]);
	}
	
	for (int i = 0; i < TAM_ARREGLO; i++) {
		if (i % 2 == 0) { 
			suma_par += numeros[i];
			cantidad_par++;
		} else { 
			suma_impar += numeros[i];
			cantidad_impar++;
		}
	}
	
	if (cantidad_par > 0) {
		promedio_par = suma_par / cantidad_par;
	}
	if (cantidad_impar > 0) {
		promedio_impar = suma_impar / cantidad_impar;
	}
	
	printf("\nResultados:\n");
	printf("Suma de elementos de índice par: %.2lf\n", suma_par);
	printf("Promedio de elementos de índice par: %.2lf\n", promedio_par);
	printf("Suma de elementos de índice impar: %.2lf\n", suma_impar);
	printf("Promedio de elementos de índice impar: %.2lf\n", promedio_impar);
	
	return 0;
}
