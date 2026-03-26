/*Na programskom jeziku C napisati strukturni program koji ispisuje kanonsku faktorizaciju
unetog broja n.Kanonska faktorizacija broja je predstavljanje pozitivnog celog broja u obliku proizvoda
svojih prostih delilaca(delioci se mogu javiti više puta u ispisu).Izlaz se sastoji od prostih delilaca unetog
broja u rastućem redosledu razdvojenih razmakom.Nije dozvoljeno korišćenje nizova.Smatrati da će
uneti broj biti pozitivan.
Primer: n = 300, Izlaz : 2 2 3 5 5 (300 = 2 * 2 * 3 * 5 * 5)
*/
#include <stdio.h>
int main()
{
	int n, i = 2;
	scanf("%d", &n);
	while (n > 1)
		if (n % i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
		else
			i++;
	return 0;
}