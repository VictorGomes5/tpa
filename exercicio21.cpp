/*
Funcão: mostrar a quantidade de dias do mês de acordo com seu número
Autor: Victor Nathan
Data de criação: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	printf("Informe o número do mês: ");
	scanf("%i", &num);
	switch(num){
		case 1: 
			printf("Janeiro: 31 dias");
		break;
		
		case 2: 
			printf("Fevereiro: 28 ou 29 dias");
		break;
		
		case 3: 
			printf("Março: 31 dias");
		break;
		
		case 4: 
			printf("Abril: 30 dias");
		break;
		
		case 5: 
			printf("Maio: 31 dias");
		break;
		
		case 6: 
			printf("Junho: 30 dias");
		break;
		
		case 7: 
			printf("Julho: 31 dias");
		break;
		
		case 8: 
			printf("Agosto: 31 dias");
		break;
		
		case 9: 
			printf("Setembro: 30 dias");
		break;
		
		case 10: 
			printf("Outubro: 31 dias");
		break;
		
		case 11: 
			printf("Novembro: 30 dias");
		break;
		
		case 12: 
			printf("Dezembro: 31 dias");
		break;
	}
}
