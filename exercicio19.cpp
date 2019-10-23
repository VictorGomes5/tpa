/*
Função: Mostrar nome e valor de determinados lanches
Nome: Victor Nathan
Data de Criação: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n = 0;
	printf("Informe o código do lanche: ");
	scanf("%i", &n);
	switch(n){
		case 1:
			printf("Cachorro-Quente, R$3,50");
		break;	
		case 2:
			printf("X-Salada, R$5,00");
		break;	
		case 7:
			printf("X-Burguer, R$8,90");
		break;	
		case 15:
			printf("X-Tudo, R$12,70");
		break;	
		default:
			printf("Produto não cadastrado.");
	}
}
