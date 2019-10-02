/*
Função: classificar a categoria de um nadador dada a idade
Autor: Victor Nathan
Data de Criação: 30/09/2019
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
		printf("A categoria do nadador é infantil");
	}else if(idade >= 12 and idade <= 17){
		printf("A categoria do nadador é juvenil");
	}else if(idade >= 18){
		printf("A categoria do nadador é adulto");
	}else{
		printf("O que vc está fazendo em uma piscina?");
	}	
}
