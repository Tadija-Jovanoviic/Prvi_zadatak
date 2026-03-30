/*
Na programskom jeziku C napisati strukturni program koji sa standardnog ulaza ucitava cele
brojeve dok se ne unese negativan broj. Za svaki uneti broj proveriti da li je palindrom
(citaju se isto sa obe strane, npr. 121, 1331). Na kraju ispisati koliko je palindroma uneto.
Nije dozvoljeno koriscenje indeksiranih promenljivih.
*/

#include<stdio.h>
int main()
{
	int broj, obrnuti_broj;
	int brojac = 0;
	int temp;
	scanf_s("%d", &broj);
	while (broj >= 0)
	{
		temp = broj;
		obrnuti_broj = 0;
		while (temp > 0)
		{
			obrnuti_broj = obrnuti_broj * 10 + temp % 10;
			temp = temp / 10;
		}
		if (broj == obrnuti_broj)
			brojac++;
		scanf_s("%d", &broj);
	}
		printf("%d", brojac);
		return 0;
}



