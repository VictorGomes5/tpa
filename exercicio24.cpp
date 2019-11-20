/*
Funcão: mostrar o quadrado de um número
Autor: Victor Nathan
Data de criação: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n = 1;
	while(n != 0){
		printf("Informe um número: ");
		scanf("%i", &n);
		if(n != 0){
			n = n * n;
			printf("\n %i \n", n);
		}
	}
}
