/*
Func�o: verificar se um n�mero � positivo ou negativo
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
	if(n > 0){
		printf("N�mero Positivo");
	}else if(n < 0){
		printf("N�mero Negativo");
	}
}
