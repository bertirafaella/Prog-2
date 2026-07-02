#include <stdio.h>
unsigned short int mudarBits(unsigned short int num){
    //zerar bit 5
    num&=~(1<<5);
    //ligar bit 8
    num|=(1<<8);
    //inverter o 9 
    num^=(1<<9);
    
    return num;
}