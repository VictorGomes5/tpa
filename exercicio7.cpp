/*
Func�o: calcular o valor de uma presta��o em atraso/*
Func�o: calcular o pre�o de um terreno
Autor: Victor Nathan
Data de cria��o: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float salario = 0, aumento = 0, novoSalario = 0;
	printf("Informe o sal�rio do funcion�rio: ");
	scanf("%f", &salario);
	printf("Informe o aumento do funcion�rio: ");
	scanf("%f", &aumento);
	novoSalario = salario + (salario * (aumento/100));
	printf("O novo s�rio do funcion�rio �: %f", novoSalario);
}
