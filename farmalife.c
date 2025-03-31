#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    float valort=0;
    int n, quant, cont;
    
    
    do {
        printf("Digite uma das opções abaixo para comprar os medicamentos:  \n");
        printf("1. Paracetamol - R$ 5,00\n");
        printf("2. Ibuprofeno - R$ 7,50\n");
        printf("3. Dipirona - R$ 4,00\n");
        printf("4. Amoxicilina - R$ 12,00\n");
        printf("5. Sair\n");
        scanf("%d",&n);
        getchar();
        system("clear");
        
        switch (n){
            case 1:
              printf("Quantas unidades irá comprar?: ");
              scanf("%d",&quant);
              getchar();
              system("clear");
              printf("R$: %.2f\n",valort=valort+(5*quant));
              break;
            
            case 2:
              printf("Quantas unidades irá comprar?: ");
              scanf("%d",&quant);
              getchar();
              system("clear");
              printf("R$: %.2f\n",valort=valort+(7.50*quant));
              break;
            
            case 3:
              printf("Quantas unidades irá comprar?: ");
              scanf("%d",&quant);
              getchar();
              system("clear");
              printf("R$: %.2f\n",valort=valort+(4*quant));
              break;
            
            case 4:
              printf("Quantas unidades irá comprar?: ");
              scanf("%d",&quant);
              getchar();
              system("clear");
              printf("R$: %.2f\n",valort=valort+(12*quant));
              break;
            
            case 5:
              if (n==5){
                  printf("O valor total é de: R$%.2f\n",valort);
                  printf("Agradecemos pela compra, volte sempre!");
                  return 0;
              }
              break;
            
            default:
              printf("Opção inválida");
              break;
        }
        
        printf("Digite 8 para continuar e 5 para sair.\n");
        scanf("%d",&cont);
        getchar();
        system("clear");
        if (cont==5){
            printf("O valor total é de: R$%.2f\n",valort);
            printf("Agradecemos pela compra, volte sempre!");
            return 0;
        }
        
    }while (cont==8);
    return 0;
}