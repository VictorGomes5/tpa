/*
Func�o: somar os �mpares de "1" at� um determinado n�mero
Autor: Victor Nathan
Data de cria��o: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, soma = 0;
	printf("Informe um n�mero: ");
	scanf("%i", &n1);
	n2 = 1;
	while(n2 <= n1){
		soma = soma + n2;
		n2 = n2 + 2; 
	}
	printf("A soma � %i", soma);
}
