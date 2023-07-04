#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vi{2,2,1,1,1,2,2};
    unordered_map<int,int> mp;

    for(int i = 0; i < vi.size(); i++)
        mp[vi[i]]++;
    
    // unordered_map<int,int> :: iterator it;
    for(auto it : mp)
    {
        if(it.second > vi.size()/2)
            cout << it.first << endl;
    }
    return 0;
}