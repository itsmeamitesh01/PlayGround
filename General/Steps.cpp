#include <bits/stdc++.h>
using namespace std;

int numstep(int st , int c)
{
    if(st % 2 == 0)
    {
        st /= 2;
        c++;
    }
    else
    {
        st--;
        c++;
        numstep(st , c);
    } 
    cout << c;
} 

int main()
{
    int n , cnt = 0;
    cin >> n;
    numstep(n , cnt);
}