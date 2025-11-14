#include <stdio.h>
#include <stdlib.h>


int main(){
    char vector [10][100];

    for( int i = 0; i<10; i++){
        printf("Informe o Nome do Querubim: \n");
        scanf("%s",vector[i]);
    }

    printf("Os nomes Que temos em Sua lista é: \n");

    for (int i = 0; i<10; i++){
        printf("%d- %s, ", i, vector[i]);
    }

    return 0;

}