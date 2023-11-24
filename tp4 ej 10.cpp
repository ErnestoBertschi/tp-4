#include <stdio.h>
#include <string.h>

#define MAX_LONGITUD_CADENA 100

int main() {
	char cadena[MAX_LONGITUD_CADENA];
	
	printf("Ingrese una cadena: ");
	fgets(cadena, MAX_LONGITUD_CADENA, stdin);
	
	printf("La cadena al revés es: ");
	for (int i = strlen(cadena) - 1; i >= 0; i--) {
		printf("%c", cadena[i]);
	}
	printf("\n");
	
	return 0;
}
