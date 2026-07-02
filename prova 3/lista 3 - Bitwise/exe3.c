#include <stdio.h>

void MostrarData (unsigned int data){

    unsigned int min=data&0x3F;
    unsigned int hora=(data>>6)&0x1F;
    unsigned int dia=(data>>11)&0x1F;
    unsigned int mes=(data>>16)&0xF;
    unsigned int ano=(data>>20)&0xFFF;
    
    printf("%u/%u/%u %u:%u\n",
           dia, mes, ano, hora, min);
}