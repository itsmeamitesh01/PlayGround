/*
   सर्वमङ्गलमाङ्गल्ये शिवे सर्वार्थसाधिके ।
   शरण्ये त्र्यम्बके गौरि नारायणि नमोऽस्तु ते ॥
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n , k , flg = 1;
    cin >> n >> k;
    vector <int>  S(n);
    for(int i = 0; i < n; i++)
        cin >> S[i];
    unordered_map<int , int> freq;
    for(int i = 0; i < n; i++)
        freq[S[i]]++;
    if(k*2 < n)
        flg = 0;
    for(auto i : freq)
    {
        if(i.second > 2)
            flg = 0;
    }
    
    if(flg > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}	

int main()
{
	int t;
	cin >> t;
	for (int test_no = 1; test_no <= t; test_no++)
	{
		cout << "Case #" << test_no << ": ";
		solve();
	}
}