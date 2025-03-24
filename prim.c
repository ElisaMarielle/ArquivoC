#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	/*
	Inteiro - int %d
	Float(real) - float %f
	Char(character) - char %c
	String(Texto) - string %c / %s
	Boolean - bool %d
	*/
	
	//DECLARE numero COMO INTEIRO
	int numero, numero2, resultado;
	
	numero = 15;
	numero2 = 5;
	resultado = (numero + numero2) / 2;
		
	printf("O numero 1 vale : %d\r\nO numero 2 vale : %d\r\nA media deles e : %d", numero, numero2, resultado);
	
	return 0;
}
