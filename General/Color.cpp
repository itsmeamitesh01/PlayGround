#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        char col[2][2]; 
        vector <char> vi;
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                cin >> col[i][j];
        int cnt , ma = INT_MIN;

        for(int i = 0; i < 2; i++)
        {
            for(int  j = 0; j < 2; j++)
                vi.push_back(col[i][j]);
        }
        
        
        for(int i = 0; i < 4; i++)
        {
            cnt = 0;
            for(int  j = i; j < 4; j++)
            {
                if(vi[i] != vi[j])
                    cnt++;
            }
            ma = max(ma, cnt);
        }
        cout << ma << endl;
    }
    return 0;
}