//positivo, negativo ou zero

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float n;
    printf("Digite um número:\n");
    scanf("%f",&n);
    if (n>0)
    {
        printf("O número é positivo");
    }
    else if (n<0)
    {
        printf("O número é negativo");
    }
    else
    {
        printf("O número é zero");
    }
    return 0;
}