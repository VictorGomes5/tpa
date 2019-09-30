/*
Funcão: calcular o valor de uma prestação em atraso/*
Funcão: calcular o preço de um terreno
Autor: Victor Nathan
Data de criação: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float salario = 0, aumento = 0, novoSalario = 0;
	printf("Informe o salário do funcionário: ");
	scanf("%f", &salario);
	printf("Informe o aumento do funcionário: ");
	scanf("%f", &aumento);
	novoSalario = salario + (salario * (aumento/100));
	printf("O novo sário do funcionário é: %f", novoSalario);
}
