#include <stdio.h>

int main (){
    int cont=0;
    float media=0.0, valor;

    FILE *arq;
    arq=fopen("questao1.bin", "rb");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fread(&valor, sizeof(int), 1, arq)>0){
        media+=valor;
        cont++;
    }
    media/=cont;

    rewind(arq);

    float menor=0.0;
    while (fread(&valor, sizeof(int), 1, arq)>0){
        if (valor>=media){
            menor=valor;
            break;
        }
    }
    fclose(arq);
    printf("%.2f", menor);
}