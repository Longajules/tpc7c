#include <iostream>  
#include <stdlib.h>
#include <cwchar>
#include <clocale>

void trier(int *tab,int taille)
{
	for (int k = 0; k < 20; k++)
		for (int n = 0; n < 20; n++)
		{
			if  ((tab, n, k) != n) { //cette condition permet de trier les valeurs du tableau du plus grand au plus petit.
				int temp = tab[k];
				tab[k] = tab[n];
				tab[n] = temp;
			}
		}
}

int main()
{

	int* tab = (int*)malloc(6 * sizeof(int));


	for (int i =0 ; i < 6; i++)
	{
		printf("donnez valeur n° %d a triez \n",i);
		scanf_s("%d", &tab[i]);
	}	
	trier(tab,6);

	return 0;
}


