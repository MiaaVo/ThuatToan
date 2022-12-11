#include <iostream>
#include <math.h>
using namespace std;
int ktSCP (int n)
{
    double canBacHai = sqrt(n);
    if (n == pow(canBacHai, 2))
    {
        return 1;
    } else 
    {
        return 0;
    }
}
int main ()
{
    int n;
    cout << "Nhap: ";
    cin >> n;
    if (ktSCP(n) == 1)
    {
        cout << n << " la so chinh phuong.";
    } else 
    {
        cout << n << " khong la so chinh phuong.";
    }
    return 0;

}