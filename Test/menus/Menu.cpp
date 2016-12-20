#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int choixMenu = 0;

	printf("=== Menu ===\n1. Royal Deluxe\n2- Mc Deluxe\n3- Mc Bacon\n4- Big Mac\nVotre choix ?");
	scanf_s("%d", &choixMenu);
	switch (choixMenu)
	{
	case 1:
		printf("Vous avez choisi un Royal Deluxe.");
		break;
	case 2:
		printf("Vous avez choisi un Mc Deluxe.");
		break;
	case 3:
		printf("Vous avez choisi un Mc bacon.");
		break;
	case 4:
		printf("Vous avez choisi un Big Mac");
		break;
	default:
		printf("Vous n'avez pas fait un bon choix.");
		break;
	}
}