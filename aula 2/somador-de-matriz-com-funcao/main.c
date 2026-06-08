// funcao para somar os dados de uma matriz e retornar

#include <stdio.h>
int somador(int m[10][10]){
    int i,j, soma=0;
    
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
        soma+=m[i][j];
        }
    }
    return soma;
}
int main (){
    int m[10][10], i, j;
    
    printf("Digite os dados da matriz:\n");
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            scanf("%d", &m[i][j]);
        }
    }
    // chamar a funcao
    int resultado = somador(m);
    printf("A soma dos dados: %d\n", resultado);
    
    return 0;
}
