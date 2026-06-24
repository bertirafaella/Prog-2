#include <stdio.h>
#include <string.h>

typedef struct {
    char paises[50];
    int ouro;
    int prata;
    int bronze;
}Pais;

void ordenar(Pais v[], int n){
    int i, j;
    Pais aux;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (v[i].ouro < v[j].ouro ||
               (v[i].ouro == v[j].ouro &&
                v[i].prata < v[j].prata) ||

               (v[i].ouro == v[j].ouro &&
                v[i].prata == v[j].prata &&
                v[i].bronze < v[j].bronze) ||

               (v[i].ouro == v[j].ouro &&
                v[i].prata == v[j].prata &&
                v[i].bronze == v[j].bronze &&

                strcmp(v[i].paises, v[j].paises) > 0)) {

                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main(){

    FILE *entrada, *saida;

    entrada=fopen("medalhas.txt", "rt");
    if (entrada == NULL){
        printf("erro ao abrir");
        return 1;
    }

    int n;
    fscanf(entrada, "%d", &n);

    Pais v[n];

    for(int i=0;i<n;i++){
        fscanf(entrada, "%s %d %d %d",
               v[i].paises,
               &v[i].ouro,
               &v[i].prata,
               &v[i].bronze);
    }
    fclose(entrada);

    ordenar(v,n);

    saida=fopen("resultado.txt", "wt");

    if (saida == NULL) {
        printf("Erro ");
        return 1;
    }
    for(int i=0;i<n;i++){
        fprintf(saida, "%s %d %d %d \n", 
        v[i].paises, v[i].ouro, v[i].prata, v[i].bronze);
    }
    fclose(saida);

    printf("Arquivo gerado com sucesso!\n");
    return 0;
}
