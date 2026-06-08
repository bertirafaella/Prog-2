#include <stdio.h>
int ehprimo(int num){
    int i;
    
    if (num<1){
        return 0;
    }
    for(i=2;i<num;i++){
        if (num%i==0){
        return 0;
        }
    }
    return 1;
}
int main(){
    int num; 
    
    printf("Digite o número: \n");
    scanf("%d", &num);
    int resultado = ehprimo(num);
    
    printf("Retorno: %d", resultado);
    
    return 0;
}