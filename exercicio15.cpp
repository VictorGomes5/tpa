/*
Fun��o: classificar a categoria de um nadador dada a idade
Autor: Victor Nathan
Data de Cria��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int idade = 0;
	printf("Informe sua idade: ");
	scanf("%i", &idade);
	if(idade >= 5 and idade <= 11){
		printf("A categoria do nadador � infantil");
	}else if(idade >= 12 and idade <= 17){
		printf("A categoria do nadador � juvenil");
	}else if(idade >= 18){
		printf("A categoria do nadador � adulto");
	}else{
		printf("O que vc est� fazendo em uma piscina?");
	}	
}
