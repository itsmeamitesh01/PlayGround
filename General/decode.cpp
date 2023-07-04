#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , flg = 0;
        cin >> n;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;   
        }

        for(auto i : mp)
        {
            if(i.second > 1)
            {
                flg = 1;
                break;
            }
        }

        if(flg == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}