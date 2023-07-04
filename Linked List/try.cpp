#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    int target = 15;

    if(n < 2 || target < 0)
    {
        cout << -1 << " - " << -1;
        exit(0);
    }
    int st = 0 , en = 0;
    int rs = arr[st] + arr[en];
    while(en < n)
    {
        if(rs == target)
        {
            cout << st << " - " << en;
            exit(0);
        }
                
        else if(rs > target)
        {
            rs -= arr[st];
            st++;
        }

        else if(rs < target)
            en++;

        if(en < n)
            rs += arr[en];
    }
    return 0;
}