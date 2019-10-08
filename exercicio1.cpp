/*
Funcão: Calcular à área de um retângulo
Autor: Victor Nathan
Data de criação: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int b =0, h= 0, a =0;
    printf("Informe a base do retângulo: ");
    scanf("%i", &b);
    printf("Informe a altura do retângulo: ");
    scanf("%i", &h);
    a = b * h;
    printf("A area é igual a: %i", a);
}