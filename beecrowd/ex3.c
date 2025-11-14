#include <stdio.h>
#include <stdlib.h>


int main(){
    char nome[5][100];
    char profissao[5][100];


    for ( int i = 0; i<5;i++){
        printf("Informe o nome do Querubim:\n ");
        scanf("%s", nome[i]);
        printf("Informe a profissão do Abençoado: \n");
        scanf("%s", profissao[i]);
    }
    
    for ( int i = 0; i <5; i++){
        printf("%d -  %s- %s",i, nome[i],profissao[i]);
    }


    return 0;
}