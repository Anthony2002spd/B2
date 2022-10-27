
#include <iostream>
using namespace std;
int main()
{
    float MAAT_x, MAAT_s = 0, MAAT_vb, MAAT_piva = 12, MAAT_viva, MAAT_pdesc = 10, MAAT_vdesc, MAAT_vn;
    int MAAT_i = 0, MAAT_l;
    cout << "Ingrese l: ";
    cin >> MAAT_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> MAAT_x;
        MAAT_i = MAAT_i + 1;
        MAAT_s = MAAT_s + MAAT_x;
    } while (MAAT_i < MAAT_l);
    MAAT_vb = MAAT_s;
    MAAT_viva = MAAT_vb * MAAT_piva / 100;
    MAAT_vdesc = MAAT_vb * MAAT_pdesc / 100;
    MAAT_vn = MAAT_vb + MAAT_viva - MAAT_vdesc;
    cout << "El valor a pagar es de: " << MAAT_vn << endl;
    return 0;
}