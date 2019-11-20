/*
Funcão: mostrar os pares entre dois números
Autor: Victor Nathan
Data de criação: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, t = 0;
	printf("Informe um número: ");
	scanf("%i", &n1);
	printf("Informe outro número: ");
	scanf("%i", &n2);
	if(n1 > n2){
		t = n1;
		n1 = n2;
		n2 = t;
	}
	if(n1 % 2 == 1){
		n1 += 1;
	}
	while(n1 <= n2){
		printf("%i \n", n1);
		n1 += 2;
	}
}
