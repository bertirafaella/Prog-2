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

while (fgets(nome, 100, arq)){

    fscanf(arq, "%f %f %f", &n1, &n2, &n3);
    media= Cmedia(n1,n2,n3);

    printf("Nome: %s", nome);
    printf("Notas: %.1f %.1f %.1f\n", n1, n2, n3);
    printf("Media: %.2f\n\n", media);

    if(media>=5){
        aprov++;
    }
    else{
        reprov++;
    }
    fgetc(arq);
}
printf("Aprovados: %d\n", aprov);
printf("Reprovados: %d\n", reprov);

fclose(arq);
return 0;
}
