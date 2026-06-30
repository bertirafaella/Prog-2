#include <stdio.h>
#include <stdlib.h>

float Cmedia(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

int main(){

char nome[100];
float n1, n2, n3, media;
int aprov=0, reprov=0;

FILE *arq;
arq=fopen("entrada.txt", "rt");

if (arq==NULL){
    printf("ERRO");
    return 1;
}

while (fgets(nome, 100, arq) != NULL){

    if (fscanf(arq, "%f %f %f", &n1, &n2, &n3) != 3){
        printf("Erro ao ler notas.\n");
        break;
    }

    media=Cmedia(n1,n2,n3);

    if(media>=5){
        aprov++;
    }
    else{
        reprov++;
    }
    fgetc(arq); //para ler o "\n"
}

printf("Aprovados: %d\n", aprov);
printf("Reprovados: %d\n", reprov);

fclose(arq);
return 0;
}
