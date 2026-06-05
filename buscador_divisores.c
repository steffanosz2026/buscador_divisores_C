#include <stdio.h>
//#include <inttypes.h>  			  //Se incluyo antiguamente por alerta con el tipo de dato %llu en linea 10 en Windows

int main(int argc, char *argv[]) {
//1.Declaracion de variables globales
unsigned long long numeroIngresado;  //Usando el tipo de dato nativo para espacios de memoria de 64bits 8bytes

//2.Lògica de bùsqueda de numeros divisores
printf("Ingrese un numero entero gigante\n");
	scanf("%I64u", &numeroIngresado);
	if(numeroIngresado <= 0) {
		printf("[ERROR] El numero ingresado debe ser entero positivo.\n");
		return 1;
	}
	for(unsigned long long i=1; i*i <=numeroIngresado; i++) {   //Optimizacion para numeros grandes usando el espejo en i*i
		if(numeroIngresado % i == 0) {    						//La condicion aplica el criterio de divisor usando el operador de modulo
			// Si i*i da exactamente el número, encontraste el eje del espejo (cuadrado perfecto)
			if(i*i == numeroIngresado) {
				printf("%I64u es divisor (cuadrado perfecto)\n", i);
			}else {
			// Caso cuadrado perfecto: i y su pareja son iguales (ej: 6 * 6)
				printf("%I64u y %I64u son divisores\n", i, numeroIngresado / i);
			}
		}
	}
	return 0;
}
