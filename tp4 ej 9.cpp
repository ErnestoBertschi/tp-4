#include <stdio.h>
#include <math.h>

#define NUM_ELEMENTOS 36

int main() {
	double S[NUM_ELEMENTOS];
	double A[NUM_ELEMENTOS];
	double P[NUM_ELEMENTOS];
	
	for (int i = 0; i < NUM_ELEMENTOS; i++) {
		A[i] = i * 10.0;
		S[i] = sin(A[i] * M_PI / 180.0);
	}
	
	for (int i = 0; i < NUM_ELEMENTOS - 2; i++) {
		P[i] = (S[i] + S[i + 1] + S[i + 2]) / 3.0;
	}
	
	printf("Angulo (grados) | Función (seno) | Promedio\n");
	printf("------------------------------------------\n");
	for (int i = 0; i < NUM_ELEMENTOS - 2; i++) {
		printf("%13.2lf | %14.6lf | %14.6lf\n", A[i], S[i], P[i]);
	}
	
	return 0;
}
