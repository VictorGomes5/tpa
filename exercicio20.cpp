/*
Func�o: mostrar o m�s de acordo com seu n�mero
Autor: Victor Nathan
Data de cria��o: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	printf("Informe o n�mero do m�s: ");
	scanf("%i", &num);
	switch(num){
		case 1: 
			printf("Janeiro");
		break;
		
		case 2: 
			printf("Fevereiro");
		break;
		
		case 3: 
			printf("Mar�o");
		break;
		
		case 4: 
			printf("Abril");
		break;
		
		case 5: 
			printf("Maio");
		break;
		
		case 6: 
			printf("Junho");
		break;
		
		case 7: 
			printf("Julho");
		break;
		
		case 8: 
			printf("Agosto");
		break;
		
		case 9: 
			printf("Setembro");
		break;
		
		case 10: 
			printf("Outubro");
		break;
		
		case 11: 
			printf("Novembro");
		break;
		
		case 12: 
			printf("Dezembro");
		break;
		
	}
}
