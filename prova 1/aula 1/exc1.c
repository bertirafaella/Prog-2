#include <stdio.h>
int main (){
    int matriz [3][3]={0};
    int i, j, soma=0;

    printf("Digite os valores: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
            soma+=matriz[i][j];
        }
    }
    printf("Soma: %d", soma);
}