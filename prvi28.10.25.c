/*
 Na programskom jeziku C napisati strukturni program koji proverava da li za uneti pozitivan
broj a važi da je zbir kubova cifara broja a jednak broju a. Ako su jednaki ispisati „da“, ako nisu ispisati
„ne“.
*/
#include<stdio.h>
int main2 ()
{ 
	int a, sum = 0, temp, cifra;
	scanf_s("%d", &a);
	temp = a;
	while (temp > 0)
	{
		cifra = temp % 10;
		
		sum += cifra * cifra * cifra;
		
	}
	if (sum == a)
		printf("da");
	else
		printf("ne");
	return 0;
}