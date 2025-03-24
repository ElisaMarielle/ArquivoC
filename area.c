#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int r;
    float area;
    printf("Informe o raio de um circulo:\n");
    scanf("%d",&r);
    area = 3.14*(r*r);
    printf("A área do circulo é:%.3f\n",area);
    
    return 0;
}