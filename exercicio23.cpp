/*
Func�o: mostrar o nome de 50 pessoas
Autor: Victor Nathan
Data de cria��o: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[50];
	int n = 0;
	printf("Informe o seu o nome: ");
	scanf("%s", &nome);
	while(n <= 60){
		printf("%s \n", nome);
		n = n + 1;
	}
}
