/*
Funcão: calcular o valor de uma prestação em atraso
Autor: Victor Nathan
Data de criação: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int atraso = 0;
	float valor = 0, taxa = 0, prestacao = 0;
	printf("Informe o valor da parcela: ");
	scanf("%f", &valor);
	printf("Informe o a taxa em porcentagem: ");
	scanf("%f", &taxa);
	printf("Informe o  tempo em dias: ");
	scanf("%i", &atraso);
	prestacao = valor + (valor * (taxa / 100) * atraso);
	printf("O valor da prestação é: %f", prestacao);
}
