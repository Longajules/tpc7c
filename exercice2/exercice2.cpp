#include <iostream>  
#include <stdlib.h>
#include <cwchar>
#include <clocale>
#include <algorithm>
#include <windows.h>

	void trier(int* tab, int taille)
	{
		std::sort(tab, tab + taille);
	}

	void affiche(int* tab,int taille) 
	{
		for (int i = 0; i < taille; i++)
		{
			printf("la valeur numero %d est : %d\n",i, tab[i]);
		}


	}



int main()
{

	int* tab = (int*)malloc(6 * sizeof(int));


	for (int i =0 ; i < 6; i++)
	{
		printf("donnez valeur numero %d a triez \n",i);
		scanf_s("%d", &tab[i]);
	}	
	trier(tab,6);
	affiche(tab,6);


	return 0;
}


