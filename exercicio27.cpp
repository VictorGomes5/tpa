/*
Funcão: somar os ímpares de "1" até um determinado número
Autor: Victor Nathan
Data de criação: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, soma = 0;
	printf("Informe um número: ");
	scanf("%i", &n1);
	n2 = 1;
	while(n2 <= n1){
		soma = soma + n2;
		n2 = n2 + 2; 
	}
	printf("A soma é %i", soma);
}
