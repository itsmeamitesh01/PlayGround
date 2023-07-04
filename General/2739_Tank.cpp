//
// Created by Lenovo on 21-06-2023.
//
#include<bits/stdc++.h>
using  namespace std;

int main() {
    ios_base ::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int m,a;
    cin >> m >> a;
    int ans = 10;
    if(m >= 5) {
        if (a >= 1) {
            ans *= m;
            m = 1;
            a = a - 1;
        } else {
            ans *= m;
            m = 0;
        }
    }
    else {
        ans *= m;
        m = 0;
    }
    return  ans;
}