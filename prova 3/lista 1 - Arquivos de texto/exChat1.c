#include <stdio.h>

typedef struct dados{
    char nome[50];
    int qnt;
    float preco;
} DADOS;

float valorTotal(int qnt, float preco){
    return qnt*preco;
}
void ordenar(float valor[], int qntProdutos, DADOS produtos[]){
    float aux;
    DADOS aux2;

    for(int i=0;i<qntProdutos;i++){
        for(int j=i+1;j<qntProdutos;j++){
            if (valor[i]<valor[j]){
                aux=valor[i];
                valor[i]=valor[j];
                valor[j]=aux;

                aux2=produtos[i];
                produtos[i]=produtos[j];
                produtos[j]=aux2;
            }
        }
    }
}
int main (){
    FILE *entrada, *saida;

    entrada=fopen("estoque.txt", "rt");

    if(entrada==NULL){
        printf("ERRO");
        return 1;
    }

    saida=fopen("relatorio.txt", "wt");
    if (saida == NULL) {
        printf("ERRO");
        fclose(entrada);
        return 1;
    }

    DADOS produtos[100];
    float valor[100];
    float ValorTotal=0;
    int qntProdutos=0;

    //ler arquivos
    while(fscanf(entrada, "%s %d %f", produtos[qntProdutos].nome,
        &produtos[qntProdutos].qnt,
        &produtos[qntProdutos].preco)==3){
        
        valor[qntProdutos]=valorTotal(produtos[qntProdutos].qnt, produtos[qntProdutos].preco);
        ValorTotal+=valor[qntProdutos];
        qntProdutos++;
    }

    //ordenar em ordem decrescente
    ordenar(valor, qntProdutos, produtos);

    //escrever relatorio
    for(int i=0;i<qntProdutos;i++){
        fprintf(saida, "%s %d %.2f %.2f \n",
            produtos[i].nome,
            produtos[i].qnt,
            produtos[i].preco,
            valor[i]);
    }
    fprintf(saida, "\nValor total do estoque: %.2f\n", ValorTotal);

    fclose(entrada);
    fclose(saida);
}