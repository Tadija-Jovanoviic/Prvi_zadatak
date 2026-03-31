/*
 Na programskom jeziku C napisati strukturni program koji za uneti prirodni broj proverava
da li je proizvod svih neparnih ili svih parnih cifara tog broja jednak kvadratu nekog prirodnog broja.
Ukoliko je proizvod neparnih cifara kvadrat prirodnog broja ispisati “Neparni”. Ako proizvod neparnih
cifara nije kvadrat, a proizvod parnih cifara jeste, prikazati “Parni”. Ukoliko nijedan od ovih proizvoda
nije kvadrat prirodnog broja, ispisati “Nema kvadrata”. Smatrati da broj ima barem jednu parnu i barem
jednu neparnu cifru.
*/

#include<stdio.h>

int main()
{
	int broj, proizvod_parnih = 1, proizvod_neparnih = 1, cifra, temp, i, nadjen = 0;

	scanf_s("%d", &broj);

	// Kopiramo broj da ne izgubimo original
	temp = broj;

	// Izvlacimo cifre i mnozimo u odgovarajuci proizvod
	while (temp > 0)
	{
		cifra = temp % 10;

		if (cifra % 2 == 0)
			proizvod_parnih *= cifra;   // parna cifra ide u proizvod parnih
		else
			proizvod_neparnih *= cifra; // neparna cifra ide u proizvod neparnih

		temp /= 10;
	}

	// Proveravamo da li je proizvod neparnih cifara savršen kvadrat
	for (i = 1; i * i <= proizvod_neparnih; i++)
	{
		if (i * i == proizvod_neparnih)
		{
			printf("Neparni");
			nadjen = 1;
		}
	}

	// Ako neparni nije kvadrat, proveravamo parne
	if (nadjen == 0)
	{
		for (i = 1; i * i <= proizvod_parnih; i++)
		{
			if (i * i == proizvod_parnih)
			{
				printf("Parni");
				nadjen = 1;
			}
		}
	}

	// Ako nijedan nije kvadrat
	if (nadjen == 0)
		printf("Nema kvadrata");

	return 0;
}