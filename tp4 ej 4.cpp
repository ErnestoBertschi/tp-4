#include <stdio.h>

#define NUM_ALUMNOS 15
#define MAX_NOTA 10

int main() {
	int notas[NUM_ALUMNOS];
	int frecuencia[MAX_NOTA + 1] = {0}; 
	
	printf("Ingrese las notas de los %d alumnos (entre 0 y 10):\n", NUM_ALUMNOS);
	for (int i = 0; i < NUM_ALUMNOS; i++) {
		do {
			printf("Nota del alumno %d: ", i + 1);
			scanf("%d", &notas[i]);
		} while (notas[i] < 0 || notas[i] > MAX_NOTA);
		
		frecuencia[notas[i]]++;
	}
	
	printf("\nFrecuencia de notas:\n");
	for (int nota = 0; nota <= MAX_NOTA; nota++) {
		printf("Nota %d: %d alumno(s)\n", nota, frecuencia[nota]);
	}
	
	return 0;
}
