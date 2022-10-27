#include <iostream>
using namespace std;
int main()
{
    int MAAT_aa, MAAT_ma, MAAT_da, MAAT_an, MAAT_mn, MAAT_dn, MAAT_a, MAAT_m, MAAT_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> MAAT_aa >> MAAT_ma >> MAAT_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> MAAT_an >> MAAT_mn >> MAAT_dn;

    if (MAAT_da > MAAT_dn)
    {

        MAAT_d = MAAT_da - MAAT_dn;
    }
    else
    {
        MAAT_da = MAAT_da + 30;
        MAAT_ma = MAAT_ma - 1;
        MAAT_d = MAAT_da - MAAT_dn;
    }

    if (MAAT_ma > MAAT_mn)
    {

        MAAT_m = MAAT_ma - MAAT_mn;
    }
    else
    {

        MAAT_ma = MAAT_ma + 12;
        MAAT_aa = MAAT_aa - 1;
        MAAT_m = MAAT_ma - MAAT_mn;
    }
    MAAT_a = MAAT_aa - MAAT_an;

    cout << "Usted tiene " << MAAT_a << " años, " << MAAT_m << " meses," << MAAT_d << " dias" << endl;
    return 0;
}