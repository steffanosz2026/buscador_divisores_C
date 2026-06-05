# Calculadora Optimizada de Divisores

Este proyecto contiene un algoritmo eficiente en lenguaje C para calcular y optimizar la búsqueda 
de los divisores de un número entero positivo.

## 🧠 Optimización Matemática
En lugar de utilizar un enfoque de fuerza bruta de complejidad lineal $O(N)$, el algoritmo reduce
 el espacio de búsqueda aumentando la velocidad del calculo y esto lo logra deteniéndose en la raíz cuadrada del número ingresado ($O(\sqrt{N})$),
 aprovechando la simetría de las parejas de divisores. La condición del bucle se mantiene activa
 mientras `i * i <= numeroIngresado`.
 Para el ingreso de numeros grandes se utilizo el tipo de dato primitivo unsigned long long que reserva espacios de 64bits 8bytes.
