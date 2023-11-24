#include <stdio.h>

int es_primo(int numero) {
	if (numero <= 1) return 0;
	for (int i = 2; i * i <= numero; i++) {
		if (numero % i == 0) return 0;
	}
	return 1;
}

int main() {
	int numeros_primos[20], contador_primos = 0, numero = 2;
	while (contador_primos < 20) {
		if (es_primo(numero)) {
			numeros_primos[contador_primos] = numero;
			contador_primos++;
		}
		numero++;
	}
	
	printf("Los primeros 20 números primos son:\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", numeros_primos[i]);
	}
	printf("\n");
	
	return 0;
}
