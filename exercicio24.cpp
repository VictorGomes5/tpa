/*
Func�o: mostrar o quadrado de um n�mero
Autor: Victor Nathan
Data de cria��o: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n = 1;
	while(n != 0){
		printf("Informe um n�mero: ");
		scanf("%i", &n);
		if(n != 0){
			n = n * n;
			printf("\n %i \n", n);
		}
	}
}
