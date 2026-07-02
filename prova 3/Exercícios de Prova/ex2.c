#include <stdio.h>

int main(){
    FILE *entrada, *saida;
    entrada=fopen("entrada.txt", "rt");
    saida=fopen("simetria.txt", "wt");

    if((entrada==NULL) || (saida==NULL)){
        printf("Erro");
        return 1;
    }

    float matriz[5][5];

    //ler entrada
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            fscanf(entrada, "%f", &matriz[i][j]);
        }
    }
    //escrever matriz transposta
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            fprintf(saida, "%.2f ", matriz[j][i]);
        }
        fprintf(saida, "\n");
    }
    fclose(entrada);
    fclose(saida);
    return 0;
}