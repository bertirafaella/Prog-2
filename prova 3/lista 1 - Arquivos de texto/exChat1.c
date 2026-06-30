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
        for(int j=i+1;i<qntProdutos;i++){
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

    DADOS produtos[100];
    float valor[100];
    float ValorTotal=0;
    int qntProdutos;
    //ler arquivos
    while(fscanf(entrada, "%c %d %f", produtos.nome, &produtos.qnt, &produtos.preco)==3){
        
    }


    fclose(entrada);
    fclose(saida);
}