#include <stdio.h>

void ligabits(unsigned int *numero){
    
    for(int i=3;i<10;i++){
        *numero|=(1<<i);
    }
}