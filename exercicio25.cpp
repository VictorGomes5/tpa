/*
Func�o: mostrar os pares entre dois n�meros
Autor: Victor Nathan
Data de cria��o: 12/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, t = 0;
	printf("Informe um n�mero: ");
	scanf("%i", &n1);
	printf("Informe outro n�mero: ");
	scanf("%i", &n2);
	if(n1 > n2){
		t = n1;
		n1 = n2;
		n2 = t;
	}
	if(n1 % 2 == 1){
		n1 += 1;
	}
	while(n1 <= n2){
		printf("%i \n", n1);
		n1 += 2;
	}
}
