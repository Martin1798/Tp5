#include <stdio.h>
#include "calculadora.h"
 
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    // Se verifica si b es igual a cero para evitar divisiones por cero
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: No se puede dividir entre cero.\n");
        return 0;
    }
}


int main() {
    int resultado;
    calculadora_t calculadora=CrearCalculadora();
    
    AgregarOperacion(calculadora,'+',suma);
    AgregarOperacion(calculadora,'-',resta);
    AgregarOperacion(calculadora,'*',multiplicacion);
    AgregarOperacion(calculadora,'/',division);
    
    resultado=Calcular(calculadora,"2-4");
    printf("resultado %i\r\n",resultado);

    return 0;
}