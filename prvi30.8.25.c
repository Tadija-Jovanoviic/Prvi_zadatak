/*
Na programskom jeziku C napisati strukturni program koji nalazi srednju vrednost cifara
unetog nenegativnog celog broja.
*/

#include<stdio.h>

int main()
{
	int broj, cifra, zbir, brojac;
	scanf_s("%d", &broj);
	zbir = 0;
	brojac = 0;
	int temp;
	temp = broj;
	while (temp > 0)
	{
		cifra = temp % 10;
		zbir += cifra;
		brojac++;

		temp = temp / 10;
	}
	float srednja_vrednost;
	srednja_vrednost = (float)zbir / brojac;
	printf("%.2f", srednja_vrednost);
	return 0;
}


