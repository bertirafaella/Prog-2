#include <stdio.h>

unsigned short int matrizParaBits(int M[4][4]){
    unsigned short int resultado=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            resultado=resultado<<1;
            resultado|=M[i][j];
        }
    }
    return resultado;
}

int main() {
    int M[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 1, 0},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };

    unsigned int resultado = matrizParaBits(M);

    printf("Valor em decimal: %u\n", resultado);
    printf("Valor em hexadecimal: %X\n", resultado);

    return 0;
}