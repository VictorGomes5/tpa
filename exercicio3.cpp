/*
Funcão: Calcular à área de um triângulo
Autor: Victor Nathan
Data de criação: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	const float pi = 3.1416;
	int r =0, a =0;
    printf("Informe o raio do círculo: ");
    scanf("%i", &r);
    a = pi * (r * r)
    printf("A area é igual a: %i", a);
}