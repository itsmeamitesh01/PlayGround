/*
   सर्वमङ्गलमाङ्गल्ये शिवे सर्वार्थसाधिके ।
   शरण्ये त्र्यम्बके गौरि नारायणि नमोऽस्तु ते ॥
*/

#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;  

#define MOD        1000000007
#define MOD1       998244353
#define INF        1e18
#define endl      "\n"
#define pb         push_back
#define ppb        pop_back
#define mp         make_pair
#define ff         first
#define ss         second
#define PI         3.141592653589793238462
#define set_bits   __builtin_popcountll
#define sz(x)      ((int)(x).size())
#define all(x)     (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<"  "; _print(x); cerr << endl;
#else 
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
void _print(bool t){cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void solve()
{
    int n;
    cin >> n;
    string sa,sb;
    cin>>sa>>sb;
    map<char,int>ma;
    map<char,int>mb;
    for(int i = 0; i < sa.size(); i++)
    {
        ma[sa[i]]++;
    }

    for(int i = 0; i < sa.size(); i++)
    {
        mb[sb[i]]++;
    }

    int flg = 0;
    map<string, int>::iterator it, jt;
    for (it = ma.begin(), jt = mb.begin(); it != ma.end(); ++it, ++jt) 
    {
        if (*it != *jt)
            flg = 1;
    }
    if(flg > 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

   int t;
   cin >> t;
   while (t--)
   {
        solve();
   }
   
   return 0;
}

 