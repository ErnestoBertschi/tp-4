#include <stdio.h>

#define NUM_ALUMNOS 10

int main() {
	double notas[NUM_ALUMNOS];
	double suma_notas = 0.0, promedio;
	int alumnos_encima = 0, alumnos_debajo = 0;
	
	printf("Ingrese las notas de los %d alumnos:\n", NUM_ALUMNOS);
	for (int i = 0; i < NUM_ALUMNOS; i++) {
		printf("Nota del alumno %d: ", i + 1);
		scanf("%lf", &notas[i]);
		suma_notas += notas[i];
	}
	
	promedio = suma_notas / NUM_ALUMNOS;
	
	for (int i = 0; i < NUM_ALUMNOS; i++) {
		if (notas[i] > promedio) {
			alumnos_encima++;
		} else if (notas[i] < promedio) {
			alumnos_debajo++;
		}
	}
	
	printf("\nPromedio de notas: %.2lf\n", promedio);
	printf("Cantidad de alumnos con notas por encima del promedio: %d\n", alumnos_encima);
	printf("Cantidad de alumnos con notas por debajo del promedio: %d\n", alumnos_debajo);
	
	return 0;
}
