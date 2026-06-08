// dia, mês e ano

#include <stdio.h>

    int calcularidade(int diatual, int mesatual, int anoatual, int dia, int mes, int ano){
    int idade= anoatual-ano;
    // verifica se ainda não fez aniversário no ano atual
    if (mesatual < mes || (mesatual == mes && diatual < dia)) {
        idade--;
    }
    return idade;
}

int main(){
    
    int diatual, mesatual, anoatual;
    int dia, mes, ano, idade;
    
    printf("Bem vindo! \n Digite o dia, mes e ano de nascimento:\n");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    printf("Agora digite o dia, mes, ano ATUAIS:\n");
    scanf("%d %d %d", &diatual, &mesatual, &anoatual);
    
    idade=calcularidade(diatual,mesatual,anoatual,dia,mes,ano);
    
    printf("Idade: %d", idade);
    
    return 0;
}