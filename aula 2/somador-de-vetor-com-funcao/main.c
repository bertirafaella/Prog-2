// funcao para somar os dados de um vetor e retornar

#include <stdio.h>
int somador(int v[10]){
    int i, soma=0;
    for(i=0;i<10;i++){
        soma+=v[i];
    }
    return soma;
}
int main (){
    int v[10], i;
    
    printf("Digite os dados do vetor:\n");
    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
    }
    // chamar a funcao
    int resultado = somador(v);
    printf("A soma dos dados: %d\n", resultado);
}
