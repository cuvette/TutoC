#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *arv[])
{
	int mysteryNumber, enteredNumber, numberOfTry = 0, difficulty, maxValue;
	int continueToPlay = 1, twoPlayers, difficultySet = 0;
	const int MIN = 1;

	while (continueToPlay)
	{
		// Choix niveau de difficulté
		do
		{
			printf("Choisissez un niveau de difficulte.\n1- Nombre mystere entre 1 et 100.\n2- Nombre mystere entre 1 et 1000\n3- Nombre mystere entre 1 et 10000.\n");
			scanf("%d", &difficulty);
			switch (difficulty)
			{
			case 1:
				maxValue = 100;
				difficultySet = 1;
				break;
			case 2:
				maxValue = 1000;
				difficultySet = 1;
				break;
			case 3:
				maxValue = 10000;
				difficultySet = 1;
				break;
			default:
				printf("Vous n'avez pas entrer une bonne valeur.\n");
				break;
			}
		} while (difficultySet == 0);

		//1 ou 2 joueurs
		printf("0- Appuyez sur 0 pour le mode 1 joueur\n1- Appuyez sur 1 pour le mode 2 joueurs\n");
		scanf("%d", &twoPlayers);

		if (twoPlayers)
		{
			printf("Joueur 1 entrez un nombre entre %d et %d.\n", MIN, maxValue);
			scanf("%d", &mysteryNumber);
			while (mysteryNumber < MIN || mysteryNumber > maxValue)
			{
				printf("Entrez une valeur correcte SVP.\n");
				scanf("%d", &mysteryNumber);
			}
			system("cls"); // effacer le texte de la console pour que le joueur 2 ne voit pas le nombre.
		}
		else
		{
			srand(time(NULL));
			mysteryNumber = (rand() % (maxValue - MIN + 1)) + MIN;
		}

		// Boucle de jeu
		printf("Le nombre mystere est entre 1 et %d.\nEntrez un nombre.\n", maxValue);
		do
		{
			scanf("%d", &enteredNumber);
			numberOfTry++;

			if (enteredNumber > mysteryNumber)
			{
				printf("%d est plus grand que le nombre mystere\n", enteredNumber);
			}

			else if (enteredNumber < mysteryNumber)
			{
				printf("%d est plus petit que le nombre mystere\n", enteredNumber);
			}
			else
			{
				printf("Bravo, vous avez trouve le nombre mystere en %d coups !\nContinuer a jouer ?\n0- NON\n1- OUI\n", numberOfTry);
				scanf("%d", &continueToPlay);
				mysteryNumber = (rand() % (maxValue - MIN + 1)) + MIN;
				numberOfTry = 0;
			}

		} while (enteredNumber != mysteryNumber);

	}
	return 0;
}