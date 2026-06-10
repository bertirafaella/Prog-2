//5 O arquivo texto "cao.txt" possui o livro "O Cão dos Baskerville" de Arthur Conan Doyle. 
//Faça um programa que leia o arquivo e conte quantas vezes aparece a palavra Holmes.

#include <stdio.h>
#include <string.h>

int main(){
    int cont=0;
    char palavra[100];

    FILE *arq;
    arq=fopen("cao.txt", "rt");

    if(arq == NULL){
        printf("Erro");
        return 1;
    }
    while(fscanf(arq, "%99s", palavra)==1){

        if (strcmp(palavra, "Holmes")==0){
            cont++;
        }
    }
fclose(arq);
printf("Holmes apareceu %d vezes.\n", cont);
}