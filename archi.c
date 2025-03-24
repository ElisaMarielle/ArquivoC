#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int tamarq, vli, tempoap;
    printf("Informe o tamanho do arquivo em MB:\n");
    scanf("%d",&tamarq);
    printf("Informe a velocidade de um link de Internet em Mbps:\n");
    scanf("%d",&vli);
    tempoap = tamarq/vli;
    printf("O tempo aproximado para download é %.1d minutos\n",tempoap);
    
    return 0;
}