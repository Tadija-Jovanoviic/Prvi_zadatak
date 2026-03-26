/*
Na programskoj jeziku C napisati strukturni program koji sa standardnog ulaza učitava
prirodan broj, generiše broj čije su cifre raspoređene u obrnutom redosledu od unetog broja, i na
standardnom izlazu prikazuje proizvod unetog i generisanog broja.
Napomena: Zadatak rešiti korišćenjem isključivo celobrojnih promenljivih. Smatrati da korisnik neće
uneti broj koji se završava cifrom 0
*/

#include<stdio.h>
int main()
{
	int broj, broj_acc, obrnuti_broj = 0, proizvod;
	scanf("%d", &broj);
	broj_acc = broj;
	while (broj > 0)
	{
		obrnuti_broj *= 10;
		obrnuti_broj += broj % 10;
		broj /= 10;
	}
	proizvod = obrnuti_broj * broj_acc;
	printf("%d", proizvod);

	return 0;
}
