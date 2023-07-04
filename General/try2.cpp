#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = n , p = 0;

    if(n < 0)
    {
        cout << false << endl;
        return 0;
    }

    while(n > 0)
    {
        int r =n % 10;
        p = p*10 + r;
        n /= 10;
    }

    if(p == a)
        cout << true << endl;
    else
        cout << false << endl;
    return 0;
}