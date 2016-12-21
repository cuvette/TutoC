#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>

void ComputeMinutes(int *hours, int *minutes);

int main(int argc, char *argv[])
{
	int hours = 0, minutes = 90;
	int *pointHours = &hours, *pointMinutes = &minutes;
	ComputeMinutes(pointHours, pointMinutes); //&hours et &minutes indique les adresses m�moires de hours et minutes
	
	printf("%d hours, %d minutes", hours, minutes);
	
	system("pause");
	return 0;
}

void ComputeMinutes(int *hours, int *minutes)
{
	*hours = *minutes / 60; // Combien d'heure dans les minutes en entr�e. *hours r�cup�re l'objet point�
	*minutes = *minutes % 60; // le reste de la division des minutes par 60 *minutes r�cup�re l'objet point�
}