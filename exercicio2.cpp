/*
Funcão: Calcular à área de um círculo
Autor: Victor Nathan
Data de criação: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int b =0, h= 0, a =0;
    printf("Informe a base do triângulo: ");
    scanf("%i", &b);
    printf("Informe a altura do triângulo: ");
    scanf("%i", &h);
    a = (b * h) / 2;
    printf("A area é igual a: %i", a);
}