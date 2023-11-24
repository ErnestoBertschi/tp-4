#include <stdio.h>

void encriptar_cadena(char *cadena) {
	for (int i = 0; cadena[i] != '\0'; i++) {
		cadena[i] = cadena[i] + 3;
	}
}

int main() {
	char cadena[100];
	
	printf("Ingrese una cadena: ");
	fgets(cadena, sizeof(cadena), stdin);
	
	encriptar_cadena(cadena);
	
	printf("Cadena encriptada: %s", cadena);
	
	return 0;
}
