//Peça ao usuário que insira o número de pessoas que vão participar do bloco e a
//quantidade média de mililitro de energético por pessoa
//quantidade total de energético em litros 

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int part, qtme, qtl;
    printf("Qual o número total de participantes no bloco?:\n");
    scanf("%d",&part);
    printf("Qual a quantidade média de mililitro por pessoa?:\n");
    scanf("%d",&qtme);
    qtl=(qtme*part)/1000;
    printf("A quantidade total de litros de energético necessários são: %d\n",qtl);
    
    return 0;
}