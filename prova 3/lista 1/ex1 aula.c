#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *arq;
    arq=fopen("dados.txt", "wt");
    printf("abriu");
    
    for(int i=0;i<5;i++){
        fprintf(arq, "rafa, %d\n", i);
    }
fclose(arq);
}
