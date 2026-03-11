#include <bits/stdc++.h>
using namespace std;

//recursive function to find fibonacci series upto n
vector<int> fib(int n) {
    if(n == 0) return {0};
    if(n == 1) return {0,1};

    vector<int> ans = fib(n - 1);
    ans.push_back(ans[n - 1] + ans[n - 2]);
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> ans = fib(n);;
    for(int i : ans) cout << i << " ";
    
    return 0;
}