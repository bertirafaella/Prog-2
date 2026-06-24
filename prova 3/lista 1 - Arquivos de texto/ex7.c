#include <stdio.h>

int main(){
    FILE *entrada, *saida;

    entrada=fopen("pedido.txt", "rt");
    saida=fopen("media.txt", "wt");

    if (entrada == NULL || saida==NULL){
        printf("Erro.");
        return 1;
    }
    int cod, numP;
    float qtd, soma, media=0.0;

    while(fscanf(entrada, "%d %d", &cod, &numP) == 2){
        soma=0.0;

        for(int i=0;i<numP;i++){
            fscanf(entrada, "%f", &qtd);
            soma+=qtd;
        }
        media=soma/numP;
        fprintf(saida, "%d %d %2.f\n", cod, numP, media);
    }
    fclose(entrada);
    fclose(saida);

    return 0;
}