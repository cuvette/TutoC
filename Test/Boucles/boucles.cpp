#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nombreEntre = 0;

	while (nombreEntre != 23)
	{
		printf("Taper le nombre 23 !!");
		scanf_s("%d", &nombreEntre);
	}
}