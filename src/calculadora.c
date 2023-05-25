#include "calculadora.h"

typedef struct operacion_s *operacion_t;

typedef struct operacion_s{

    char operador;
    funcion_t funcion;
    operacion_t siguiente;

};

struct calculadora_s{

    operacion_t operaciones;

};

calculadora_t CrearCalculadora(void){

    calculadora_t puntero=malloc(sizeof(struct calculadora_s));
    if(puntero){
        memset(puntero,0,sizeof(struct calculadora_s));
    }
    
return puntero;
}


