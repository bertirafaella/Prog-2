#include <stdio.h>

void merge_arquivos(char arquivo1[50], char arquivo2[50], char final[50]){

    FILE *arq1, *arq2, *saida;
    arq1=fopen("arquivo1.txt", "rt");
    arq2=fopen("arquivo2.txt", "rt");
    saida=fopen("final.txt", "wt");

    if (arq1 == NULL || arq2 == NULL || saida == NULL) {
        printf("Erro ao abrir arquivos.\n");
        return;
    }

    int tem1, tem2, n1, n2;

    tem1= fscanf(arq1,"%d" , &n1);
    tem2= fscanf(arq2,"%d" , &n2);

    while (tem1==1 && tem2==1){

        if (n1<=n2){
            fprintf(saida, "%d\n", n1);
            tem1=fscanf(arq1, "%d", &n1);
        }
        else{
            fprintf(saida, "%d\n", n2);
            tem2=fscanf(arq2, "%d", &n2);
        }
    }

     while (tem1 == 1) {
        fprintf(saida, "%d\n", n1);
        tem1=fscanf(arq1, "%d", &n1);
    }
    while (tem2 == 1) {
        fprintf(saida, "%d\n", n2);
        tem2=fscanf(arq2, "%d", &n2);
    }
    fclose(arq1);
    fclose(arq2);
    fclose(saida);
}
int main() {
    char arq1[50], arq2[50], saida[50];

    printf("Digite o primeiro arquivo: ");
    scanf("%s", arq1);

    printf("Digite o segundo arquivo: ");
    scanf("%s", arq2);

    printf("Digite o arquivo de saida: ");
    scanf("%s", saida);

    merge_arquivos(arq1, arq2, saida);

    printf("Merge concluido! Arquivo gerado: %s\n", saida);

    return 0;
}