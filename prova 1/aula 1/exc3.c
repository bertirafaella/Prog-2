#include <stdio.h>
int main (){
    int i, j, soma=0;
    int m[4][4]={
        {1,  2,  3, 4},
        {16, 17, 18, 5},
        {15, 24, 25, 6},
        {19, 20, 21, 22}
    };
    // Troque todos os elementos da linha 1 pelo elemento correspondente na linha 3
    int aux=0;
    for(j=0;j<4;j++){
        aux=m[1][j];
        m[1][j]=m[3][j];
        m[3][j]=aux;
    }

    //b) Troque cada elemento da coluna 0 pelo elemento correspondente na coluna 2.
    aux=0;
    for(i=0;i<4;i++){
        aux=m[i][0];
        m[i][0]=m[i][2];
        m[i][2]=aux;
    }
    printf("Matriz alterada: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
