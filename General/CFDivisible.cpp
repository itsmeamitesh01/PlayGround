/*
   सर्वमङ्गलमाङ्गल्ये शिवे सर्वार्थसाधिके ।
   शरण्ये त्र्यम्बके गौरि नारायणि नमोऽस्तु ते ॥
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a , b ,c ,d;
	cin >> a >> b >> c >> d;
	int p = a*b;
	vector<int> n1;
	vector<int> n2;

	for(int i = a+1; i <= c; i++)
	{
		n1.push_back(i);
	}

	for(int j = b+1; j <= d; j++)
	{
		n2.push_back(j);
	}

	int dis = max((c-a) , (d-b));
	int e = min((c-a) , (d-b));

	int ans = -1, res = -1;
	for(int i = 0; i < e; i++)
	{
		for(int j = 0; j < dis; j++)
		{
			if(n1[i]*n2[j] % p == 0)
			{
				ans = n1[i];
				res = n2[j];
                break;
			}
		}
	}
	cout << ans << " " << res <<  endl;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin >> t;
   while (t--)
   {
		solve();
   }
   return 0;
}