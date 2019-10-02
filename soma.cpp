/*
Função: Somar dois números
Autor: Marcos Fajoli de Almeida
Autor: Victor Nathan Alves Gomes
Data de Criação: 25/09/2019
Data de Alteração: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, soma = 0;
	printf("Informe um número inteiro: \n");
	scanf("%i", &n1);
	printf("Informe o segundo número inteiro: \n");
	scanf("%i", &n2);
	soma = n1 + n2;
	printf("Soma é igual a %i", soma);
}

