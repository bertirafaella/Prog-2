#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[51];
    float preco;
} produto;

int main(){

    FILE *entrada, *saida;
    entrada= fopen("entrada.txt", "rt");
    if (entrada==NULL){
        printf("erro");
        return 1;
    }

    int m, p, qnt;
    float total=0.0;

    // ler a quantidade de produtos disponivel
    fscanf(entrada, "%d", &m);

    produto dados[m];

    for(int i=0;i<m;i++){
        fscanf(entrada, "%s %f", dados[i].nome, &dados[i].preco);
    }
    fscanf(entrada, "%d", &p);
    char nomeProduto[51];

    for(int j=0;j<p;j++){
          fscanf(entrada,"%s %d", nomeProduto, &qnt);

          for(int j=0;j<m;j++){
            if (strcmp(nomeProduto, dados[j].nome)==0){
                total+=dados[j].preco*qnt;
                break;
            }
        }
    }

    fclose(entrada);
    saida=fopen("saida.txt", "wt");
    fprintf(saida, "R$%.2f", total);
    fclose(saida);
    
    return 0;
}
