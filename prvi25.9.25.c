/*
Na programskom jeziku C napisati strukturni program koji proverava da li je uneti ceo broj
nenegativan i na standardni izlaz prikazuje veću cifru kao rezultat upoređivanja cifre najveće i najmanje
težine. Za negativne brojeve na standardni izlaz prikazati "X".
*/

#include<stdio.h>

int main()
{
	int broj, cifra, prva, poslednja, veca;
	scanf_s("%d", &broj);
	if (broj < 0)
		printf("X");
	else
	{
		poslednja = broj % 10;
		while (broj >= 10)
		{
			broj = broj / 10;
		}
		prva = broj;

		if (prva > poslednja)
			veca = prva;
		else
			veca = poslednja;
		printf("%d", veca);
	}
	return 0;
}

