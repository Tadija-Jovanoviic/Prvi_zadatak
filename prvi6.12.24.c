/*
Na programskom jeziku C napisati program koji nalazi proste brojeve do broja a i prikazuje
ih na ekranu, zatim racuna i prikazuje njihovu sumu, nalazi sve proste brojeve do te sume, ponovo ih
prikazuje na ekranu i tako sve dok suma prostih brojeva u ciklusu ne postane veca od broja b.
*/

#include<stdio.h>

int main()
{
	int a, b, i, j, prost, suma;
	scanf_s("%d %d", &a, &b);

	suma = 0;

	while (b > suma) // ponavljamo dok suma ne postane veca od b
	{
		for (i = 2; i <= a; i++)
		{
			prost = 1;
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					prost = 0;
					break;
				}
			}
			if (prost == 1)
			{
				suma += i;
				printf("%d ", i);
			}
		}
		printf("\nSuma: %d\n", suma);
		if (suma > b) break; // ako je suma veca od b, zavrsavamo
		a = suma; // nova granica je prethodna suma
		suma = 0; // resetujemo sumu za sledeci prolaz
	}

	return 0;
}
