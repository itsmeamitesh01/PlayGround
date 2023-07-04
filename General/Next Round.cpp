/*
   सर्वमङ्गलमाङ्गल्ये शिवे सर्वार्थसाधिके ।
   शरण्ये त्र्यम्बके गौरि नारायणि नमोऽस्तु ते ॥
*/

#include <bits/stdc++.h>

#define ll    long long int
#define F      first
#define S      second
#define pb     push_back
#define si     set<int>
#define vi     vector<int>
#define ma     map<int,int>
#define pa     pair<int,int>
#define endl   "\n"
#define double long double
#define tc int t; cin >> t; while(t--)


using namespace std;

int main()
{
	int n , k , c = 0;
	cin >> n >> k;
	vi a(n);
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if(a[k] == 0)
	{
	    for (int i= 1; i <= n; i++)
	    {
	        if(a[i] > a[k])
	            c++;
	    }
	}
	else
	{
	    for(int i = 1; i <= n; i++)
	    {
		    if(a[i] >= a[k])
			    c++;
	    }
	}
	cout << c;
	return 0;
} 