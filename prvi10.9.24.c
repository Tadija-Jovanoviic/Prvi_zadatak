/*
 Na programskom jeziku C napisati strukturni program kojim se vrši učitavanje M celih
brojeva, različitih od nule sa tastature. Nakon toga je potrebno odrediti proizvod brojeva čija je cifra
najveće težine jednaka cifri najmanje težine, kao i broj brojeva koji su deljivi zbirom svojih cifara.
Dobijeni proizvod i broj brojeva prikazati korisniku na standardnom izlazu, tako da su date vrednosti
odvojene jednim blanko znakom. Parametar M korisnik unosi sa standardnog ulaza.
*/

#include<stdio.h>
int main()
{
	int broj, M, i, cifra, proizvod = 1, najveca_cifra, najmanja_cifra, brojac = 0, suma, temp;
	scanf_s("%d", &M);
	for (i = 0; i < M; i++)
	{
		scanf_s("%d", &broj);
		temp = broj;
		suma = 0;
		najmanja_cifra = temp % 10;
		while (temp != 0)
		{
			najveca_cifra = temp % 10;
			temp = temp / 10;
			suma += najveca_cifra;
		}
		if (najveca_cifra == najmanja_cifra)
		{
			proizvod *= broj;
		}
		if (broj % suma == 0)
		{
			brojac++;
		}
	}
	printf("%d %d", proizvod, brojac);

	return 0;
}