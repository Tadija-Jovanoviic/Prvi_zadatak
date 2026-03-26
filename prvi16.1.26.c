/*
Na programskom jeziku C napisati strukturni program za invertovanje brojeva. Korisnik sa
tastature unosi cele brojeve sve dok ne unese nulu. Svaki broj invertovati (pročitati sa desna na levo) i
prikazati na standardnom izlazu. Kada korisnik unese nulu odštampati ukupnu sumu svih invertovanih
brojeva.
Napomena: Nije dozvoljeno korišćenje indeksiranih promenljivih.
*/
int main()
{
	int broj, invertovan;
	int suma = 0;

	scanf("%d", &broj);
	while (broj != 0)
	{
		invertovan = 0;
		while (broj != 0)
		{
			invertovan = invertovan * 10 + broj % 10;
			broj = broj / 10;
		}
		suma += invertovan;
		printf("%d\n", invertovan);
		scanf("%d", &broj);
	}
	printf("%d", suma);
}
