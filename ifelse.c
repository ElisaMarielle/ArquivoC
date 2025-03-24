#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    char nome[20];
    float n1, n2, n3, n4, media;
    printf("Digite o nome do aluno: \n");
    scanf("%s",nome);
    printf("Digite suas 4 notas: \n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media=(n1+n2+n3+n4)/4;
    if (media>=6)
    {
        printf("O aluno %s obteve a média %.2f e está aprovado.", nome,media);
    }
    else
    {
        printf("O aluno %s obteve a média %.2f e está reprovado.",nome,media);
    }
    
    return 0;
}