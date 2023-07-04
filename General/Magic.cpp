#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Square: "<<endl;
    cin>>n;
    int mgsq[n][n];
    memset(mgsq, 0,sizeof(mgsq));
    int r=n/2;
    int c=n-1;
    for (int i=1;i<=n*n;)
    {
        if (r==-1 and c==n)
        {
            c=n-2;
            r=0;
        }
        else
        {
            if(c==n)
                c==0;
            if(r<0)
                r=n-1;
        }
        if (mgsq[r][c])
        {
            c-=2;
            r++;
            continue;
        }
        else
            mgsq[r][c]=i++;        
        c++;
        r--;
    }
    cout<<"Magic Square for "<<n<<endl;
    cout<<"Sum of each column or row: "<<n*(n*n+1)/2<<endl;
    for (r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
            cout<<setw(4)<<mgsq[r][c]<<" ";
        cout<<endl;
    }
    return 0;
}