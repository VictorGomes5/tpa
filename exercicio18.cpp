/*
Fun��o: Mostrar os dias da semana
Nome: Victor Nathan
Data de Cria��o: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n = 0;
	printf("Informe o dia da semana: ");
	scanf("%i", &n);
	switch(n){
		case 1:
			printf("Domingo");
		break;
		case 2:
			printf("Segunda-Feira");
		break;
		case 3:
			printf("Ter�a-Feira");
		break;
		case 4:
			printf("Quarta-Feira");
		break;
		case 5:
			printf("Quinta-Feira");
		break;
		case 6:
			printf("Sexta-Feira");
		break;
		case 7:
			printf("S�bado");
		break;
		default:
			printf("Esse dia n�o � v�lido!");
	}
}
