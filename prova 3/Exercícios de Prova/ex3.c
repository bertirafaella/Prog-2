#include <stdio.h>

unsigned char binario(char b[8]){
    unsigned char num=0;

    for(int i=0;i<8;i++){
        num=num<<1;
        if(b[i]=='1'){
            num|=1;
        }
    }
    return num;
}