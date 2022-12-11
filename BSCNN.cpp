#include <iostream>
using namespace std;
int LCM(int &a, int &b)
{
    int LCM = a * b;
    for (int i = max(a,b); i <= LCM; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}
int main ()
{
    cout << "Nhap: ";
    int a, b;
    cin >> a >> b;
    cout << "LCM " << LCM(a,b);
    return 0;
}