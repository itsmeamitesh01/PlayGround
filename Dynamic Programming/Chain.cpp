#include <bits/stdc++.h>
using namespace std;
int matrixChainMultiplication(vector<int> const &dims,int i, int j)
{
    if (j <= i + 1)
        return 0;
    int min = INT_MAX;
    for (int k=i+1;k<=j-1;k++)
    {
        int cost = matrixChainMultiplication(dims, i, k);
	    cost+= matrixChainMultiplication(dims, k, j);
 	    cost+=dims[i]*dims[k]*dims[j];
        if (cost<min)
 	    {
	    	min=cost;
        }
    }
return min;
}
int main()
{
    vector<int> dims = {14,23,4,56};
    int n=dims.size();
    cout<<"Minimum cost: "<<matrixChainMultiplication(dims,0,n -1);
return 0;
}
