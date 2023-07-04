#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> ans)
{
    int ma = ans[0];
    for(int i = 0; i < ans.size(); i++)
    {
        if(ma < ans[i])
            ma = ans[i];
    }
    cout << ma << endl;
}
int main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    solve(a);
    return 0;
}