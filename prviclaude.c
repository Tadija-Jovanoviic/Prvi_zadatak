/*
    Unosi se niz brojeva dok se ne unese 0.
    Za svaki broj prebrojati koliko ima parnih cifara, a koliko neparnih.
    Ispisati koji broj ima najvecu razliku izmedju broja parnih i neparnih cifara.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int broj, temp, cifra, broj_parnih = 0, broj_neparnih = 0;
    int max_razlika = 0, max_broj = 0, razlika;

    scanf("%d", &broj);
    while (broj != 0)
    {
        temp = broj;
        broj_parnih = 0;
        broj_neparnih = 0;

        while (temp != 0)
        {
            cifra = temp % 10;
            temp = temp / 10;
            if (cifra % 2 == 0)
                broj_parnih++;
            else
                broj_neparnih++;
        }

        razlika = abs(broj_parnih - broj_neparnih);
        if (razlika > max_razlika)
        {
            max_razlika = razlika;
            max_broj = broj;
        }

        scanf("%d", &broj);
    }

    printf("Najvecu razliku ima broj %d (razlika: %d)", max_broj, max_razlika);

    return 0;
}
