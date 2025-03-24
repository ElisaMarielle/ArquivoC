#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int nu1, nu2, nu3, nu4;
    float media;
    printf("Informe a primeira nota:\n");
    scanf("%d",&nu1);
    printf("Informe a segunda nota:\n");
    scanf("%d",&nu2);
    printf("Informe a terceira nota:\n");
    scanf("%d",&nu3);
    printf("Informe a quarta nota:\n");
    scanf("%d",&nu4);
    media = (nu1+nu2+nu3+nu4)/4;
    printf("Sua média é:%.1f",media);
    
    return 0;
}