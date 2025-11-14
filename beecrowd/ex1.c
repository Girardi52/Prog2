#include <stdio.h> 
#include <stdlib.h> 


int main(){

    char vector [10][100];

    //char nomes[100];


    for ( int i = 0; i <2; i++){

        printf("Informe o nome da pessoa que você quer guardar: \n");
        scanf("%s", vector[i]);

        //vector [i] = vector;
        


    }
    printf("Os nomes guardados no seu vetor sao \n");
    for (int i = 0; i < 2; i++  ){
        printf("%d- %s, ", i, vector[i]);
    }
    return 0;
}