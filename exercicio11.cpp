/*
Func�o: calcular o cubo de um n�mero maior que 5 e menor que 20
Autor: Victor Nathan
Data de cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n = 0;
	printf("Informe um n�mero: ");
	scanf("%i", &n);
	if(n > 5 and n < 20){
		n = n * n * n;
		printf("O cubo do n�mero � %i", n);
	}
}
