#include <iostream>
using namespace std;
int UNLN(int &a, int &b)
{
    int nho = 0, lon  = 0;
    for (int i = 2; i < min (a, b); i++ )
    {
        if (a % i == 0 && b % i == 0)
        {
            nho = i;
            break;
        }
    }
        if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    int c = 0;
    while ((c = a % b) != 0)
    {
        a = b;
        b = c;
    }
    lon = b;
    return lon / nho;
}
int main ()
{
    cout << "Nhap: ";
    int a, b;
    cin >> a >> b;
    cout << "UCLN: " << UNLN(a,b);
    return 0;
}