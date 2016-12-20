#include <stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
{
	int nombre1, nombre2, resultat = 0;

	printf("Nous allons faire une addition !\nEntrez un premier nombre.");
	scanf_s("%d", &nombre1);
	printf("Entrez un deuxieme nombre.");
	scanf_s("%d", &nombre2);
	resultat = nombre1 + nombre2;
	printf("Resultat : %d \n", resultat);
	
	return 0;
}