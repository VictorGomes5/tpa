/*
Func�o: mostrar algumas opera��es escolhidas pelo usuario
Autor: Victor Nathan
Data de cria��o: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 0, num2 = 0, op = 0, valor = 0;
	printf("Informe um n�mero: ");
	scanf("%i", &num1);
	printf("Informe outro n�mero: ");
	scanf("%i", &num2);
	printf("Informe o c�digo da opera��o sabendo que: 1 � adi��o; 2 � subtra��o; 3 � multiplica��o; 4 � divis�o: ");
	scanf("%i", &op);
	switch (op) {
		case 1:
			valor = num1 + num2;
			printf("\n A adi��o desse n�meros �: %i", valor);
		break;
		
		case 2:
			valor = num1 - num2;
			printf("\n A subtradi��o desse n�meros �: %i", valor);
		break;
		
		case 3:
			valor = num1 * num2;
			printf("\n A multiplica��o desse n�meros �: %i", valor);
		break;
		
		case 4:
			valor = num1 / num2;
			printf("\n A divis�o desse n�meros �: %i", valor);
		break;
	}
}
