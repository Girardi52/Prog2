#include <stdlib.h>

#include <stdio.h>

int main(){
    int vector[10];
    int aux;
    
    printf("Informe os Números a serem armazenados nesse vetor \n");
    for (int i = 0; i<10; i++){
        scanf("%d", &vector[i]);
    } 
    for (int i = 0; i<5; i++){

        aux = vector[i];
        vector[i] = vector[9-i];
        vector[9-i] = aux;
    }

    for ( int i = 0; i <10; i++){
        printf("%d, ", vector[i]);
    }

    return 0;
}