/*
Função: Calcula a média de 4 notas
Autor: Victor Nathan
data de criação: 30/09/19
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float n1 = 0, n2 = 0, n3 = 0, n4 = 0, media = 0;
	printf("informe a primeira nota: ");
	scanf("%f", &n1);
	printf("informe a segunda nota: ");
	scanf("%f", &n2);
	printf("informe a terceira nota: ");
	scanf("%f", &n3);
	printf("informe a quarta nota: ");
	scanf("%f", &n4);
	media = (n1 + n2 + n3 + n4) / 4;
	printf("A média é igual á: %f", media);
}
