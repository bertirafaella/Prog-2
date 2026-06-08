#include <stdio.h>
int main (){
    int i, j, soma=0;
    int m[3][3]={
        {1,  2,  3},
        {16, 17, 18},
        {15, 24, 25}
    };

    // soma elementos diagonal principal.
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (i==j){
                soma+=m[i][j];
            }
        }
    }
    printf("\n---RESULTADO---\n");
    printf("Soma diagonal principal: %d\n", soma);
    soma=0;

    // soma elementos diagonal secundária.
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (i+j==2){
                soma+=m[i][j];
            }
        }
    }
    printf("Soma diagonal secundaria: %d\n", soma);
    soma=0;

    //soma elementos ACIMA diagonal principal
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (i<j){
                soma+=m[i][j];
            }
        }
    }
    printf("Soma acima diagonal principal: %d\n", soma);
    soma=0;
    
    //soma elementos ACIMA diagonal secundaria
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (i+j<2){
                soma+=m[i][j];
            }
        }
    }
    printf("Soma acima diagonal secundaria: %d\n", soma);
    soma=0;

    //soma elementos ACIMA diagonal principal e ABAIXO da secundaria
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (i<j && i+j>=3){
                soma+=m[i][j];
            }
        }
    }
    printf("Soma ACIMA diagonal principal e ABAIXO da secundaria: %d\n", soma);
}