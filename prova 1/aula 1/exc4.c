#include <stdio.h>

int main (){
    int i, j, encontrou, num;
    int m[5][5]={
        {1,  2,  3, 4, 18},
        {16, 17, 18, 5,24},
        {15, 24, 25, 6, 2},
        {5, 7, 21, 28, 16},
        {19, 23, 78, 69, 50}
    };
    printf("Digite um valor para verificarmos na matriz:\n");
    for(int p=0; p<5; p++){
        scanf("%d", &num);

        encontrou=0;

        for(i=0;i<5;i++){
            for (j=0;j<5;j++){
                if (m[i][j]==num){
                    printf("Encontrado na linha: %d, coluna: %d\n", i, j);
                    encontrou = 1;
                    break;
                }
            }
            if (encontrou==1){
                break;
            }
        }
        if (encontrou == 0){
            printf("Não tem.\n");
        }
    }
    return 0;
}