#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        vector <int>  S(n);
        for(int i = 0; i < n; i++)
            cin >> S[i];

        int A[k] , flg = 1;
        vector <int> B(k);
        for(int i = 0; i < n; i++)
        {
            int l = *(&A + 1) - A; //Check length of A
            
            if(l != k) //If len(A) != k i.e A has not atmost K elements
                A[i] = S[i]; //Assign value of S at [i] to A[i]
            else
                B.push_back(S[i]); //If A has atmost K elements, then push the next element in vector B
            
            
            if(B.size() > k) //Check if size of B has more than K elements
                flg = 0; //If true, assign flg = 0
            else
                flg = 1; //If false, assign flg = 1
            
            if(S.empty()) //Check if the main vector S empty
                flg = 1; //If true,  assign flg = 1
            else
                flg = 0;  //If false, assign flg = 0
        }
        if(flg > 0)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}