// receba o preço do tecido binário, o preço dos leds coloridos e o custo da
//linha de costura algorítmica para a confecção de uma fantasia. Calcule e imprima o custo total da fantasia

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float tec, led, linha, total;
    printf("Qual o valor do tecido?:\n");
    scanf("%f",&tec);
    printf("Qual o tecido dos leds coloridos?:\n");
    scanf("%f",&led);
    printf("Qual o valor da linha?:\n");
    scanf("%f",&linha);
    total=tec+linha+led;
    printf("O valor total a ser gasto é de %.2f\n reais",total);
    
    return 0;
}