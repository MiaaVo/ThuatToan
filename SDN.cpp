#include <iostream>
using namespace std;
int SDN (int &n)
{
    int phanDu, daoNguoc = 0;
    while (n > 0)
    {
        phanDu = n % 10;
        daoNguoc = daoNguoc * 10 + phanDu;
        n = n / 10;
    }
    return daoNguoc;
}
int main(){
    int n;
    cin >> n;
    cout << SDN(n);
}