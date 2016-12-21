#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include "tableaux.h"

int main(int argc, char *argv[])
{
	int table[5], table2[5] = { 0 }, i = 0;

	table[0] = 1;
	table[1] = 3;
	table[2] = 5;
	table[3] = 7;
	table[4] = 9;


	TableSum(table, 5);
	TableMean(table, 5);
	CopyTable(table, table2, 5);

	system("pause");
	return 0;
}

void TableSum(int *table, int tableSize) // Appeler un tableau pointe vers l'adresse de sa premiere cellule
{
	int i;
	static int result = 0;

	for (i = 0; i < tableSize; i++)
	{
		result = result + table[i];
	}

	if (i == tableSize)
		printf("La somme des valeurs du tableau est %d\n", result);

}

void TableMean(int *table, int tableSize)
{
	int i;
	static double result = 0;

	for (i = 0; i < tableSize; i++)
	{
		result = (result + table[i]) / tableSize;
	}

	if (i == tableSize)
		printf("La moyenne des valeurs du tableau est %f\n", result);
}

void CopyTable(int *Originaltable, int *tableCopy, int tableSize)
{
	int i = 0;

	printf("Avant la copie, les valeurs du deuxieme tableau sont:\n");
	for (i = 0; i < tableSize; i++)
	{
		printf("%d\n", tableCopy[i]);
	}

	for (i = 0; i < tableSize; i++)
	{
		tableCopy[i] = Originaltable[i];
	}

		printf("Les valeurs du premier tableau sont:\n");
		for (i = 0; i < tableSize; i++)
		{
			printf("%d\n", Originaltable[i]);

		}
		printf("les valeurs du deuxieme tableau sont:\n");
		for (i = 0; i < tableSize; i++)
		{
			printf("%d\n", tableCopy[i]);

	}
}