/*
Funcão: calcular o preço de um terreno
Autor: Victor Nathan
Data de criação: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float comp = 0, larg = 0, area = 0, preco = 0, valor = 0;
	printf("Informe o comprimento do terreno: ");
	scanf("%f", &comp);
	printf("Informe a largura do terreno: ");
	scanf("%f", &larg);
	printf("Informe o preço do metro do terreno: ");
	scanf("%f", &preco);
	area = comp * larg;
	valor = area * preco;
	printf("O valor do terreno é: %f", valor);
}
