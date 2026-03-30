/*Na programskom jeziku C napisati strukturni program kojim se vrši učitavanje N celih brojeva
različitih od nule sa tastature.Potrebno je odrediti koliko unetih brojeva sadrži bar jednu parnu i bar jednu
neparnu cifru.Dobijeni broj brojeva prikazati korisniku na standardnom izlazu.Parametar N korisnik unosi
sa standardnog ulaza*/

#include<stdio.h>

int main()
{
	int N, i, broj, cifra;
	int brojac = 0;

	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &broj);
		int temp = broj;
		int broj_parnih = 0;
		int broj_neparnih = 0;
		while (temp != 0)
		{
			cifra = temp % 10;
			temp = temp / 10;

			if (cifra % 2 == 0)
				broj_parnih++;
			else
				broj_neparnih++;
		}
		if (broj_parnih > 0 && broj_neparnih > 0)
			brojac++;
	}
	printf("%d", brojac);
	return 0;
}



