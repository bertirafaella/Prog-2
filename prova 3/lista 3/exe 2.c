#include <stdio.h>

unsigned int mudar(unsigned int num){

    //zerar bit 5
    num &=~(1 << 5);
    //ligar bit 8
    num|=(1<<8);
    //inverter bit 9
    num^=(1<<9);
    return num;
    //teste
}