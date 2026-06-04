#include <stdio.h>

int main(int argc, char *argv[]) {
//1.Declaracion de variables globales
long long numeroIngresado;

//2.Lògica de bùsqueda
printf("Ingrese un numero\n");
	scanf("%lld", &numeroIngresado);
	if(numeroIngresado <= 0) {
		printf("[ERROR] El numero ingresado debe ser entero positivo mayor a 0.\n");
		return 1;
	}
	for(long long i=1; i*i <=numeroIngresado; i++) { 
		if(numeroIngresado % i == 0) {    //La condicion aplica el criterio de divisor usando el operador de modulo
			if(i*i != numeroIngresado) {
				printf("%lld y %lld son divisores\n", i, numeroIngresado / i);
			}else {
				// Caso cuadrado perfecto: i y su pareja son iguales (ej: 6 y 6)
				printf("%lld es divisor\n", i);
			}
		}
	}
	return 0;
}

