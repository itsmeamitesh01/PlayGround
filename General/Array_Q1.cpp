/*
   सर्वमङ्गलमाङ्गल्ये शिवे सर्वार्थसाधिके ।
   शरण्ये त्र्यम्बके गौरि नारायणि नमोऽस्तु ते ॥
*/

#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define ff             first
#define ss             second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int,int>
#define vpi            vector <pii>
#define vpp            vector <pai<int,pii>>
#define mii            map <int,int>
#define mpi            map <pii,int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define printl(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout <<  a[i] << " "; cout << endl
#define srt_as         sort(a , a + n)
#define srt_ds         sort(a , a + n, greater<int>())
#define rev_ar         reverse(a , a + n)
#define test           int t; cin >> t; while(t--)
#define rep(i,a,b)	  for(int i = a; i < b; i++)


inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve()
{
	int n;
	cin >> n;
	vi a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int ma = a[0];
	for(int i = 1; i < n; i++)
		ma = max(a[i] , ma);
	cout << ma << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

   int t = 1;
   // cin >> t;
   while (t--)
   {
		solve();
   }
   //cerr << "Run-Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

   return 0;
}