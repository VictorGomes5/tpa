/*
Func�o: calcular o cubo de um n�mero maior que 5 e menor que 20
Autor: Victor Nathan
Data de cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0;
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &n1);
	printf("Informe o segundo n�mero: ");
	scanf("%i", &n2);
	if(n1 > n2){
		printf("O maior n�mero � %i", n1);
	}else if(n2 > n1){
		printf(" O maior n�mero � %i", n2);
	}else{
		printf("Os n�meros tem o mesmo valor");
	}
}
