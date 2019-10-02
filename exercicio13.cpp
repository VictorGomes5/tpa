/*
Função: Exibir o maior de três números
Autor: Victor Nathan
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, n3 = 0;
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	printf("Informe o terceiro número: ");
	scanf("%i", &n3);
	if(n1 > n2 and n1 > n3){
		printf("O maior número é %i", n1);
	}else if(n2 > n3){
		printf("O maior número é %i", n2);
	}else{
		printf("O maior número é %i", n3);
	}
}
