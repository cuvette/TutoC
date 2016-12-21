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
	ComputeMinutes(pointHours, pointMinutes); //&hours et &minutes indique les adresses mémoires de hours et minutes
	
	printf("%d hours, %d minutes", hours, minutes);
	
	system("pause");
	return 0;
}

void ComputeMinutes(int *hours, int *minutes)
{
	*hours = *minutes / 60; // Combien d'heure dans les minutes en entrée. *hours récupère l'objet pointé
	*minutes = *minutes % 60; // le reste de la division des minutes par 60 *minutes récupère l'objet pointé
}