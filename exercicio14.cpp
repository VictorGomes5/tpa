/*
Fun��o: classificar tr�s n�meros em ordem crescente
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
	if(n1 >= n2 and n1 >= n3 and n2 >= n3){
		printf("Os n�meros em ordem crescente � %i, %i e %i", n3, n2, n1);
	}else if(n1 >= n2 and n1 >= n3 and n3 >= n2){
		printf("Os n�meros em ordem crescente � %i, %i e %i", n2, n3, n1);
	}else if(n2 >= n1 and n2 >= n3 and n1 >= n3){
		printf("Os n�meros em ordem crescente � %i, %i e %i", n3, n1, n2);
	}else if(n2 >= n1 and n2 >= n3 and n3 >= n1){
		printf("Os n�meros em ordem crescente � %i, %i e %i", n1, n3, n2);
	}else if(n3 >= n1 and n3 >= n2 and n1 >= n2){
		printf("Os n�meros em ordem crescente � %i, %i e %i", n2, n1, n3);
	}else{
		printf("Os n�meros em ordem crescente � %i, %i e %i", n1, n2, n3);
	}
}
