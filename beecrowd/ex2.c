#include <stdio.h>
#include <stdlib.h>


int main(){
    char vector[2][100];

    for (int i = 0; i<2; i++){
        printf("Informe o nome da pessoa que você quer guardar ");
        scanf("%s", vector[i]);

    }
    int numero;
    for (int i =0; i<2; i++ ){
        printf("Informe A posição que você quer acessar esse vetor: \n ");
        scanf("%d", &numero);

        printf("%s",vector[numero]);
    }
    return 0;
}