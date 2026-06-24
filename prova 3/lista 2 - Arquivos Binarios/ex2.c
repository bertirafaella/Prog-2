#include <stdio.h>

int main(){
    FILE *arq;
    arq=fopen("questao2.bin", "rb");
    int notas[6]={0};
    int valor;

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while(fread(&valor, sizeof(int), 1, arq)>0){
        notas[valor]++;
        printf("%d", valor);
    }
    fclose(arq);

    arq=fopen("q2.txt", "wt");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for(int i=1;i<=5;i++){
        fprintf(arq, "%d : ", i);
        for(int j=0;j<notas[i];j++){
            fprintf(arq, "*");
        }
    }
    fclose(arq);
}