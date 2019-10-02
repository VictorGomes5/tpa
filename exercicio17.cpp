/*
Funcão: Verificar se um número é par ou impar
Autor: Victor Nathan
Data de criação: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0, quo = 0, resto =0;
	printf("Informe um número: ");
	scanf("%i", &num);
	quo = num /2;
	resto = num - (quo * 2);
	if(resto != 0){
		printf("Esse número é impar.");
	}else{
		printf("Esse número é par.");
	}
}