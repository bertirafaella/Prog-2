#include <stdio.h>

struct estado {
char nome[31];
int numveic;
int numacid;
};
typedef struct estado ESTADO;

ESTADO estado_maior_numero_acidentes(char nome_arquivo[80]){
    ESTADO est, estmais={"", 0,0};
    FILE *arq;
   
    arq=fopen("questao3.bin", "rb");
    if (arq==NULL){
        printf("erro");
        return estmais;
    }
   
    while(fread(&est, sizeof(ESTADO),1,arq)>0){
        if  (est.numacid > estmais.numacid){
            estmais=est;
        }
    }
   
    fclose(arq);
    return estmais;
}
int main() {
    ESTADO resultado;

    resultado = estado_maior_numero_acidentes("questao3.bin");

    printf("Estado com mais acidentes:\n");
    printf("Nome: %s\n", resultado.nome);
    printf("Veiculos: %d\n", resultado.numveic);
    printf("Acidentes: %d\n", resultado.numacid);

    return 0;
}