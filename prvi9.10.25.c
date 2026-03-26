/*
 Na programskom jeziku C napisati strukturni program kojim se računa prosečna vrednost
zbirova unutrašnjih cifara unetih celih brojeva. Unutrašnje cifre su sve cifre broja osim prve i poslednje.
Jednocifreni i dvocifreni brojevi nemaju unutrašnje cifre, pa je kod njih zbir unutrašnjih cifara jednak
nuli. Korisnik unosi brojeve dok ne unese nulu, čime se prekida izvršenje i prikazuje rezultat u formatu
realnog broja zaokruženog na dva decimalna mesta. Prilikom računanja prosečne vrednosti jednocifrene i
dvocifrene brojeve ne brojati (kao da nisu uneti). Primer: kod unosa 342, 12, 4338, 1, 457 smatra se da je
uneto ukupno 3 broja, a prosečna vrednost zbirova unutrašnjih cifara je (4+6+5)/3=5. Računati da će
korisnik unositi samo pozitivne cele brojeve. Ukoliko su uneti samo jednocifreni i dvocifreni brojevi
program treba da vrati nulu.
Napomena: Nije dozvoljeno korišćenje indeksiranih promenljivih.
*/
#include<stdio.h>
int main()
{
	int uneti_broj = 1;
	int ukupna_suma = 0;
	int broj_unetih_validnih_brojeva = 0;
	float prosek;
	while (uneti_broj) 
	{
	scanf("%d", &uneti_broj);
	if (uneti_broj >= 100) {
		broj_unetih_validnih_brojeva++;
		int suma_za_trenutni_broj = 0;
		uneti_broj = uneti_broj / 10;
		while (uneti_broj >= 10) {
			suma_za_trenutni_broj += uneti_broj % 10;
			uneti_broj = uneti_broj / 10;
		}
		ukupna_suma += suma_za_trenutni_broj;
	}
}
if (broj_unetih_validnih_brojeva > 0) {
	prosek = (float)ukupna_suma / broj_unetih_validnih_brojeva;
	printf("%.2f\n", prosek);
}
else {
	printf("0");
}
return 0;
}