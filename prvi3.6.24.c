/*
Na programskom jeziku C napisati strukturni program koji proverava da li je unet pozitivan
ceo broj prost. Ukoliko je broj post prikazati sumu njegovih cifara u suprotnom prikazati proizvod
njegovih cifara.
*/

#include<stdio.h>
int main()
{
	int temp, i, broj, cifra, suma = 0, proizvod = 1, prost = 1;
	scanf_s("%d", &broj);
	temp = broj;
	for (i = 2; i < temp; i++)
	{
		if (broj % i == 0)
		{
			prost = 0;
			break;
		}
	}
	while (temp != 0)
	{
		cifra = temp % 10;
		temp = temp / 10;

		if (prost == 1)
			suma += cifra;
		else
			proizvod *= cifra;
	}
	if (prost == 1)
		printf("%d", suma);
	else
		printf("%d", proizvod);

	return 0;
}