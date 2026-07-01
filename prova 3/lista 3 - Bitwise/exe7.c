#include <stdio.h>

unsigned short retorno(unsigned short int num){
    return (num>>8)|(num<<8);
}