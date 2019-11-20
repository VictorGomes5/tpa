/*
Funcão: mostrar algumas operações escolhidas pelo usuario
Autor: Victor Nathan
Data de criação: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 0, num2 = 0, op = 0, valor = 0;
	printf("Informe um número: ");
	scanf("%i", &num1);
	printf("Informe outro número: ");
	scanf("%i", &num2);
	printf("Informe o código da operação sabendo que: 1 é adição; 2 é subtração; 3 é multiplicação; 4 é divisão: ");
	scanf("%i", &op);
	switch (op) {
		case 1:
			valor = num1 + num2;
			printf("\n A adição desse números é: %i", valor);
		break;
		
		case 2:
			valor = num1 - num2;
			printf("\n A subtradição desse números é: %i", valor);
		break;
		
		case 3:
			valor = num1 * num2;
			printf("\n A multiplicação desse números é: %i", valor);
		break;
		
		case 4:
			valor = num1 / num2;
			printf("\n A divisão desse números é: %i", valor);
		break;
	}
}
