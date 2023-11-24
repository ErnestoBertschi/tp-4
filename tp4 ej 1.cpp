#include <stdio.h>
#include <math.h>

#define NUM_MUESTRAS 5

int main() {
	int muestras[NUM_MUESTRAS];
	int sumatoria = 0;
	double error_cuadratico_medio = 0.0;
	double promedio;
	
	printf("Ingrese las %d muestras:\n", NUM_MUESTRAS);
	for (int i = 0; i < NUM_MUESTRAS; i++) {
		printf("Muestra %d: ", i + 1);
		scanf("%d", &muestras[i]);
		sumatoria += muestras[i];
	}
	
	promedio = (double)sumatoria / NUM_MUESTRAS;
	
	for (int i = 0; i < NUM_MUESTRAS; i++) {
		error_cuadratico_medio += pow(muestras[i] - promedio, 2);
	}
	error_cuadratico_medio /= NUM_MUESTRAS;
	error_cuadratico_medio = sqrt(error_cuadratico_medio);
	
	printf("\nPromedio: %.2f\n", promedio);
	printf("Error cuadrático medio: %.2f\n", error_cuadratico_medio);
	
	return 0;
}
