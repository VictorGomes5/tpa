/*
Func�o: mostrar o fatorial de um n�mero
Autor: Victor Nathan
Data de cria��o: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, fat = 0;
	printf("Informe um n�mero: ");
	scanf("%i", &n1);
	n2 = 2;
	if(n1< 0){
		printf("Este n�mero n�o possui fatorial!");
	}else{
		if(n1 == 0 or n1 == 1){
			fat = 1;
		}
		if(n1 > 1){
			fat = n1 * n2;
			n2 += 1; 
			while(n2 < n1){
				fat = fat * n2;
				n2 += 1;
			}
		}
		printf("O fatorial de %i �: %i", n1 , fat);
	}
}
