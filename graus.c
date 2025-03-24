#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float F, Ce;
    printf("Informe o valor de graus Farenheit:\n");
    scanf("%f",&F);
    Ce = (F-32)*5/9;
    printf("O valor em graus Celsius é:%.2f\n",Ce);
    
    return 0;
}