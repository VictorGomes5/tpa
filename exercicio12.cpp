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
	int n1 = 0, n2 = 0;
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	if(n1 > n2){
		printf("O maior número é %i", n1);
	}else if(n2 > n1){
		printf(" O maior número é %i", n2);
	}else{
		printf("Os números tem o mesmo valor");
	}
}
