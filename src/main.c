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
    calculadora_t calculadora = CrearCalculadora();
    resultado=0;
    AgregarOperacion(calculadora,'+',suma);
    AgregarOperacion(calculadora,'-',resta);
    AgregarOperacion(calculadora,'*',multiplicacion);
    AgregarOperacion(calculadora,'/',division);//devuelve un numero entero, asi que si divido 2/4 por ej devolvera 0
    
    resultado=Calcular(calculadora,"6-5");
    printf("resultado %i\r\n",resultado);

    return 0;
}