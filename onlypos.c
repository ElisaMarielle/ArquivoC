#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"");
    int n, i;
    float num, soma=0;
    
    printf("Quantos números você quer somar?: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        do {
            printf("Digite os números: ");
            scanf("%f",&num);
            
            if (num<=0) {
                printf("Número inválido. Digite um número positivo\n");
            }
            
        }while(num<=0);
        
        soma+=num;
    }
    printf("A soma de todos os números é: %.2f\n",soma);
    
    return 0;
}