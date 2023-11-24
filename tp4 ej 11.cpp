#include <stdio.h>
#include <ctype.h>

int contar_vocales(const char *cadena) {
	int contador = 0;
	for (int i = 0; cadena[i] != '\0'; i++) {
		char c = tolower(cadena[i]);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			contador++;
		}
	}
	return contador;
}

int main() {
	char cadena[100];
	
	printf("Ingrese una cadena: ");
	fgets(cadena, sizeof(cadena), stdin);
	
	int num_vocales = contar_vocales(cadena);
	
	printf("La cadena tiene %d vocal(es).\n", num_vocales);
	
	return 0;
}
