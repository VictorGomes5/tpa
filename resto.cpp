/*
Função: Retornar o resto da divisão de 2 números
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
	int n1 = 0, n2 = 0, quoc = 0, resto = 0;
	printf("Insira o primeiro número: \n");
	scanf("%i", &n1); 
	printf("Insira o segundo número: \n");
	scanf("%i", &n2);
	quoc = n1/n2;
	resto = n1 - (quoc * n2);
	printf("O resto é: %i", resto);
	return 0;
}
