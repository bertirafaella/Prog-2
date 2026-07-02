#include <stdio.h>

int main(){

    FILE *entrada, *saida;
    entrada=fopen("entrada.bin", "rb");
    saida=fopen("saida.bin", "wb");

    if((entrada == NULL)||(saida==NULL)){
        printf("Erro");
        return 1;
    }
    float valor, maior;

    //inicializar a maior!
    fread(&maior, sizeof(float), 1, entrada);

    //receber o restante dos valores e comparar com a maior
    while(fread(&valor, sizeof(float), 1, entrada)>0){
        if(valor>maior){
            maior=valor;
        }
    }
    rewind(entrada);
    while(fread(&valor, sizeof(float), 1, entrada)>0){
        valor/=maior;
        fwrite(&valor, sizeof(float), 1, saida);
    }
    
    fclose(entrada);
    fclose(saida);
    return 0;
}