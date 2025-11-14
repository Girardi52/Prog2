#include <stdio.h>
#include <stdlib.h>
#include "fila.h"




void inicializa_fila(tipo_fila *fila){


    fila->cont = 0;
     return;

    
}

int remove_elem_fila(tipo_fila *fila){
    if (fila == NULL){
        return -1;
    }
    int aux = fila->fila[0]; // serve para guardar o elemento que ue vou remover 

    for ( int i = 0; i <fila->cont -1 ; i++){
        

        fila->fila[i] = fila->fila[i+1];
        
    }
    fila->cont --;

    return aux;
}



int insere_elem_fila(tipo_fila *fila, int valor){
    if (fila->cont == TAM_MAX){
        return -1;
    }
    fila->fila[fila->cont]= valor;

    fila->cont++;

    return 0;




}

int fila_vazia(tipo_fila fila){
    if (fila.cont == 0 ){
        return 1;
    }
    return 0;
}

int fila_cheia(tipo_fila *fila){
    if (fila->cont == TAM_MAX){
        return 1;
    }
    return 0;
}

void imprime_fila(tipo_fila fila){
    printf("FILA = [");
    for(int i =0; i< fila.cont;i++){
        printf("%d, ",fila.fila[i]);


    }
    printf("]");
    
}