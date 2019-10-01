/*
Funcão: calcular o cubo de um número maior que 5 e menor que 20
Autor: Victor Nathan
Data de criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n = 0;
	printf("Informe um número: ");
	scanf("%i", &n);
	if(n > 5 and n < 20){
		n = n * n * n;
		printf("O cubo do número é %i", n);
	}
}
