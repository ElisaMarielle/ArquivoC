#include<locale.h> 
#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
    setlocale(LC_ALL,""); 
    float sal, renda; 
    printf("Informe seu salário:\n"); 
    scanf("%f", &sal); 
    getchar(); 
    system("clear"); 
    if (sal<=1903.98) {
        printf("Insento!"); return 1; 
    }
    else if (sal>=1903.99 && sal<=2826.65) {
        renda=sal*0.075; 
        printf("Valor do imposto: %.2f\n Salário Final: %.2f", renda, sal-renda); 
    return 1;
    }
    else if(sal>=2826.66 && sal<=3751.05) {
        renda=sal*0.15; 
        printf("Valor do imposto: %.2f\n Salário Final: %.2f", renda, sal-renda); 
        return 1;
    }
    else if (sal>=3751.06 && sal<=4664.68) {
        renda=sal*0.225;
        printf("Valor do imposto: %.2f\n Salário Final: %.2f", renda, sal-renda); 
        return 1; 
    }
    else {
        renda=sal*0.275; 
        printf("Valor do imposto: %.2f\n Salário Final: %.2f", renda, sal-renda);
        return 1; 
    }
    
    return 0; 

}