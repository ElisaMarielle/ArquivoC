#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float vh, ht, sal;
    printf("Informe o valor ganhado por hora:\n");
    scanf("%f",&vh);
    printf("Informe o total de horas trabalhadas no mês:\n");
    scanf("%f",&ht);
    sal = vh*ht;
    printf("O valor do seu salário é:%.2f\n",sal);
    
    return 0;
}