//1.Duração total do desfile (em minutos). 2.Tempo médio de cada música (em minutos).
//3.Tempo total reservado para propagandas e interações com o público (em minutos).
//4.Tempo médio gasto em cada transição de música (em segundos): (Peça essa informação ao usuário).

//1.Quantas músicas completas podem ser tocadas durante o desfile? (Considere que o tempo total do desfile deve ser suficiente
//para tocar as músicas completas, fazer as propagandas e as transições).
//2.Quanto tempo (em minutos) sobrará no final do desfile (após tocar o máximo possível de músicas completas)?

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int dur, preint, transi, sobra, tempd, tempg;
    float tempom, musicas;
    printf("Qual a duração total do desfile? (em minutos):\n");
    scanf("%d",&dur);
    printf("Qual o tempo médio de cada música? (em minutos):\n");
    scanf("%f",&tempom);
    printf("Qual o tempo reservado para propagandas e interações com o público? (em minutos):\n");
    scanf("%d",&preint);
    printf("Qual o tempo médio gasto em cada transição de música? (em segundos):\n");
    scanf("%d",&transi);
    tempd=(dur-preint-transi);
    musicas=tempd/tempom;
    tempg=musicas*tempom;
    sobra=tempd%tempg;
    printf("A quantidade de músicas completas que podem ser tocadas é %.1f\ne sobrará %d\nminutos",musicas,sobra);
    
    return 0;
}