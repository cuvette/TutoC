#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nombreEntre = 0;

	while (nombreEntre != 23)
	{
		printf("Taper le nombre 23 !!");
		scanf("%d", &nombreEntre);
	}
}