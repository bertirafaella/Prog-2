#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media (char mat[50], char nome_arquivo[50]){
    float n1, n2, n3;
    char matricula[50];

    FILE *arq;
    arq= fopen(nome_arquivo, "r");

    if (arq == NULL){
        printf("ERRO!");
        exit(1);
    }
    float resultado=-1.0;

    while(fscanf(arq,"%s %f %f %f", matricula, &n1, &n2, &n3) != EOF){
        if (strcmp(matricula, mat) == 0){
            resultado = (n1+n2+n3)/3.0;
            break;
        }
    }
    fclose(arq);
    return resultado;
}