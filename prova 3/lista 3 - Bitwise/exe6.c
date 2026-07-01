#include <stdio.h>

int contarBits(unsigned int num){
    int cont=0;
    for(int i=0;i<32;i++){
        cont+=(num>>i)&1;
    }
    return cont;
}
void ordenar(int v[100]){
    int aux;

    for(int i=0;i<100;i++){
        for(int j=i+1;j<100;j++){
            if(contarBits(v[i])<contarBits(v[j])){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
            else if (contadorBits1(v[i])==contadorBits1(v[j]) && v[i]<v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}