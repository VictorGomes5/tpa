/*
Fun��o: Retornar o resto da divis�o de 2 n�meros
Autor: Marcos Fajoli de Almeida
Autor: Victor Nathan Alves Gomes
Data de Cria��o: 25/09/2019
Data de Altera��o: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, quoc = 0, resto = 0;
	printf("Insira o primeiro n�mero: \n");
	scanf("%i", &n1); 
	printf("Insira o segundo n�mero: \n");
	scanf("%i", &n2);
	quoc = n1/n2;
	resto = n1 - (quoc * n2);
	printf("O resto �: %i", resto);
	return 0;
}
