/*
Fun��o: Exibir o maior de tr�s n�meros
Autor: Victor Nathan
Data de Cria��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, n3 = 0;
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &n1);
	printf("Informe o segundo n�mero: ");
	scanf("%i", &n2);
	printf("Informe o terceiro n�mero: ");
	scanf("%i", &n3);
	if(n1 > n2 and n1 > n3){
		printf("O maior n�mero � %i", n1);
	}else if(n2 > n3){
		printf("O maior n�mero � %i", n2);
	}else{
		printf("O maior n�mero � %i", n3);
	}
}
