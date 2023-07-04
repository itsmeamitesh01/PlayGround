/*
   सर्वमङ्गलमाङ्गल्ये शिवे सर्वार्थसाधिके ।
   शरण्ये त्र्यम्बके गौरि नारायणि नमोऽस्तु ते ॥
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int ma = a[0];
	for(int i = 1; i < n; i++)
		ma = max(a[i] , ma);
	cout << ma << endl;
}

int main()
{
   int t = 1;
   while (t--)
   {
		solve();
   }
   //cerr << "Run-Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

   return 0;
}