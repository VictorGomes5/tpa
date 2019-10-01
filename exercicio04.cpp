/*
Funcão: calcular o quadrado da soma de três números
Autor: Victor Nathan
Data de Criação: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, n3= 0, resu = 0;
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	printf("Informe o terceiro número: ");
	scanf("%i", &n3);
	resu = (n1 + n2 + n3) * (n1 + n2 + n3);
	printf("A soma do quadrado dos número é: %i", resu);
}
