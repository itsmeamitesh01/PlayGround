#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        string a , b;
        cin >> a >> b;
        
        set<char> col;
        col.insert(a[0]);
        col.insert(a[1]);
        col.insert(b[0]);
        col.insert(b[1]);

        cout << col.size() - 1 << endl;
    }
    return 0;
}