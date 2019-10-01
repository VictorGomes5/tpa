/*
Funcão: verificar se um número é positivo ou negativo
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
	if(n > 0){
		printf("Número Positivo");
	}else if(n < 0){
		printf("Número Negativo");
	}
}
