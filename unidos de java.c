#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float km;
    int ser, conf;
    printf("Quantos quilômetros (km) serão percorridos?\n");
    scanf("%f",&km);
    ser=km*200;
    conf=km*500;
    printf("O 'Unidos do Java' percorrerá %.1f\n km no desfile e precisará de aproximadamente %d\n confetes e %d\n serpentinas!",km,conf,ser);
    
    return 0;
}