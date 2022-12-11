#include <iostream>
using namespace std;
int SHH(int n)
{
    int a = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            a += i;
        }
    }
    if (n == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "Nhap: ";
    cin >> n;
    if (SHH(n) == 1)
    {
        cout << n << " la so hoan hao";
    }
    else
    {
        cout << n << " khong la so hoan hao";
    }
    return 0;
}