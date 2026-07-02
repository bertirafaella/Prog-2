#include <stdio.h>

void mudarBits(unsigned int *num){
    
    //ligar 3 a 10;
    for(int i=3;i<10;i++){
        *num|=(1<<i);
    }
    //inverter 11 a 15
    for(int i=11;i<15;i++){
        *num^=(1<<i);
    }
}