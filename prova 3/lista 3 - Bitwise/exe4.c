#include <stdio.h>

void mudar(unsigned short int *num){
    unsigned short int resultado=0;
    
    for(int i=0;i<16;i++){
            unsigned short int bit=(*num>>i)&1; //pegar o digito;
            
            resultado|=bit<<(15-i); //colocar na nova posição
    }
    *num=resultado;
}