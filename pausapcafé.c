// receba o número total de máscaras e o número de participantes no bloco.
//Quantas máscaras cada participante receberá (divisão inteira).
//Quantas máscaras sobrarão após a distribuição (resto da divisão).

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int masc, part, mt, mr;
    printf("Qual o número total de participantes no bloco?:\n");
    scanf("%d",&part);
    printf("Qual o número total de máscaras?:\n");
    scanf("%d",&masc);
    mt=masc/part;
    mr=masc%part;
    printf("Os participantes receberão %d\n máscaras e sobrarão %d\n máscaras",mt,mr);
    
    return 0;
}