#include <stdio.h>

unsigned short int mudar(unsigned short int num){
    //zerar bit 5
    num &=~(1 << 5);
    //ligar bit 8
    num|=(1<<8);
    //inverter bit 9
    num^=(1<<9);
    return num;
}
int main() {
    unsigned int num;

    printf("Digite um numero: ");
    scanf("%u", &num);

    printf("Antes: %u\n", num);

    num = mudar(num);

    printf("Depois: %u\n", num);

    return 0;
}