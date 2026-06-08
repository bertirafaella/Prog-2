// funcao para ordenar vetor

#include <stdio.h>
void ordena(int v[5]) {
	int i,j,aux=0;

	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
            if (v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
		}
	}
	return;
}
int main () {
	int v[5], i, j;

	printf("Digite os dados do vetor desordenado:\n");
	for(i=0; i<5; i++) {
	    scanf("%d", &v[i]);
		}
		
	// chamar a funcao
	ordena(v);

	printf("Vetor ordenado:\n");
	for(i=0;i<5;i++){
	    printf("\n%d\n", v[i]);
	}
	return 0;
}