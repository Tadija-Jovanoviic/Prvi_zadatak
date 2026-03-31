/*
Na programskom jeziku C napisati strukturni program koji proverava da li je uneti ceo broj
deljiv sa 11. Broj je deljiv sa 11 ako razlika zbira njegovih cifara na parnim mestima i zbira cifara na
neparnim mestima iznosi tačno 0 ili tačno 11. Ako je broj deljiv, prikazati poruku „Deljiv“, u suprotnom
prikazati poruku „Nedeljiv“
*/

#include<stdio.h>

int main()
{
	int broj, temp, cifra, zbir_parnih = 0, zbir_neparnih = 0, pozicija = 1;
	scanf_s("%d", &broj);

	temp = broj;

	while (temp > 0)
	{
		cifra = temp % 10;

		if (pozicija % 2 == 0)
			zbir_parnih += cifra;
		else
			zbir_neparnih += cifra;
		pozicija++;


		temp = temp / 10;
	}
	if (zbir_parnih - zbir_neparnih == 0 || zbir_parnih - zbir_neparnih == 11 || zbir_parnih - zbir_neparnih == -11)
		printf("Deljiv");
	else
		printf("Nedeljiv");
	return 0;
}
