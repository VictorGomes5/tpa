/*
Função: 
Autor: Victor Nathan
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int nota = 0;
	char nome;
	printf("Informe o nome do aluno: ");
	scanf("%c", &nome);
	printf("Informe a nota do aluno: ");
	scanf("%i", &nota);
	if(nota >= 7){
		printf("O aluno(a) %c foi Aprovado!", nome);
	}else{
		printf("O aluno(a) %c foi Reprovado!", nome);
	}
}
