#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dados{
    char cpf[20];
    char nome[100];
    float salario;
    char departamento[50];
} funcionarios;

void ordenar(funcionarios f[], int n) {
    funcionarios temp;

    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n; j++) {
            if (strcmp(f[i].nome, f[j].nome) > 0) {
                temp = f[i];
                f[i] = f[j];
                f[j] = temp;
            }
        }
    }
}

int main (){
    FILE *arq = fopen("entrada.txt", "rt");

    if (arq == NULL) {
        printf("ERRO\n");
        exit(1);
    }
    int n;
    fscanf(arq, "%d", &n);

    funcionarios f[n];
    for(int i=0;i<n;i++){
         fscanf(arq, "%s", f[i].cpf);
        fscanf(arq, " %[^\n]", f[i].nome);
        fscanf(arq, "%f", &f[i].salario);
        fscanf(arq, "%[^\n]", f[i].departamento);
    }
    fclose(arq);

    ordenar(f,n);

    FILE *saida=fopen("ordenado.txt", "wt");

      if (saida == NULL) {
        printf("ERRO\n");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        fprintf(saida, "%s %s %.2f %s\n",
                f[i].cpf,
                f[i].nome,
                f[i].salario,
                f[i].departamento);
    }

    fclose(saida);

    return 0;
}
