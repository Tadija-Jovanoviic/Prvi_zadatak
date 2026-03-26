/*(
Na programskom jeziku C napisati strukturni program za računanje sume parnih i neparnih
cifara unetih brojeva. Korisnik unosi cele brojeve sa standardnog ulaza, a unos se prekida kada suma
parnih cifara svih unetih brojeva postane jednaka sumi neparnih cifara svih unetih brojeva. Prikazati
rezultujuću sumu na standardnom izlazu.
Napomena: Nije dozvoljeno korišćenje indeksiranih promenljivih.
*/
#include<stdio.h>
int main()
{
	int broj, cifra;
	int suma_parnih = 0, suma_neparnih = 0;
	int uslov = 0;
	while (!uslov)
	{
		scanf("%d", &broj);
		while (broj != 0)
		{
			cifra = broj % 10;
			broj = broj / 10;

			if (cifra < 0)
				cifra = cifra * (-1);

			if (cifra % 2 == 0)
				suma_parnih += cifra;
			else
				suma_neparnih += cifra;
		}
		if (suma_parnih == suma_neparnih)
			uslov = 1;
	}
	printf("%d", suma_parnih);
	return 0;
}