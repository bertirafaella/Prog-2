#include <stdio.h>
#include <math.h>

typedef struct ponto {
  float x;
  float y;
} PONTO;

PONTO mais_distante_ponto_medio (char questao4[]){

    PONTO p, cMedio, maisDistante;
    FILE *arq;
    arq=fopen("questao4.bin", "rb");

    if (arq==NULL){
        printf("Erro ao abrir");
        cMedio.x=0;
        cMedio.y=0;
        return cMedio;
    }
    float somax=0, somay=0;
    int cont=0;

    while(fread(&p, sizeof(PONTO), 1, arq)==1){
        somax+=p.x;
        somay+=p.y;
        cont++;
    }

    cMedio.x=somax/cont;
    cMedio.y=somay/cont;
    printf("Centro medio: (%.2f, %.2f)\n", cMedio.x, cMedio.y);

    rewind(arq);

    float dist, maiorDist=-1;
    while (fread(&p, sizeof(PONTO), 1, arq)==1){
        dist=sqrt(pow(p.x-cMedio.x, 2) + pow(p.y-cMedio.y, 2));
        if (dist > maiorDist){
            maiorDist=dist;
            maisDistante=p;
        }
    }
    fclose(arq);
    return maisDistante;
}
int main() {

    PONTO resultado;

    resultado = mais_distante_ponto_medio("questao4.bin");

    printf("Ponto mais distante do centro medio:\n");
    printf("(%.2f, %.2f)\n", resultado.x, resultado.y);

    return 0;
}