#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num;
    char *est;
    printf("Digite um número de 1 a 4 para saber qual a estção do mês: \n");
    scanf("%d",&num);
    
    switch(num){
        case 1:
         printf("\n Verão\n");
           break;
           
        case 2:
         printf("\n Inverno\n");
           break;
           
        case 3:
         printf("\n Outono\n");
           break;
           
        case 4:
         printf("\n Primavera\n");
           break;
           
        default:
        printf("Opção inválida. Programa encerrado. \n");
        
        return 1;
    }

    return 0;
}
