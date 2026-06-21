#include <stdio.h>

unsigned int matrizParaBits(int M[4][4]) {
    unsigned int resultado=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            resultado= resultado<<1;
            resultado|=M[i][j];
        }
    }
    return resultado;
}