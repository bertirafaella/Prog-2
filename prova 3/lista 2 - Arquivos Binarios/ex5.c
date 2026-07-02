#include <stdio.h>
#include <string.h>

typedef struct dados{
    char nome[50];
    float n1;
    float n2;
    float n3;
}DADOS;

float Cmedia(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

void ordenar(DADOS aluno[], float media[], int num){
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if (media[i]<media[j] || (media[i]==media[j] && strcmp(aluno[i].nome, aluno[j].nome)>0)){

                float aux=media[i]; // trocar media
                media[i]=media[j];
                media[j]=aux;

                DADOS aux1=aluno[i]; // troca aluno
                aluno[i]=aluno[j];
                aluno[j]=aux1;
            }
        }
    }
}
int main(){
    FILE *entrada, *saida;
    entrada=fopen("entrada.bin", "rb");
    saida=fopen("saida.txt", "wt");

    if (entrada == NULL || saida == NULL){
        printf("Erro ao abrir arquivo\n");
        return 1;
    }

    DADOS aluno[100];
    float media[100];
    int i=0;

    //ler todos os alunos e ver a quantidae
    while(fread(&aluno[i], sizeof(DADOS), 1, entrada)){
        i++;
    }

    //calcular media
    for(int j=0;j<i;j++){
        media[j]=Cmedia(aluno[j].n1, aluno[j].n2, aluno[j].n3);
    }

    ordenar(aluno, media, i); // ordenar

    //printar
    for(int j=0;j<i;j++){
        fprintf(saida, "%s %.2f \n", aluno[j].nome, media[j]);
    }

    fclose(entrada);
    fclose(saida);
    return 0;
}
