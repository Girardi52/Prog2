#include <stdio.h>
#include<stdlib.h>

int main(){
    float  vector[10];
    for ( int i = 0; i<10;i++ ){
        printf("Informe a numero \n ");
        scanf("%f", &vector[i]);
    }

    for ( int i = 9; i>0; i--){
        printf("A sua posição invertida eh %.2f",vector[i] );
    }

    return 0;

}