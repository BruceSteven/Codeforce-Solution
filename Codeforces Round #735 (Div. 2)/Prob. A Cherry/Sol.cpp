/* Author - Nguyen Quoc Khanh */
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <string> vs;
typedef vector <vector <int>> vvi;
typedef vector <vll> vvll;
typedef map<int, int> mi;
#define Love_Nga ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) x.begin(),x.end()
#define SORT(x) sort(all(x))
#define FIX cout << fixed << setprecision(15)
const long double PI = 3.141592653589793;
const ll mod = 998244353;
/*-------------------------------------------------------------------------*/
void solve() {	  
	int n;ll res(0);cin>>n;
	vector<ll> a(n);
	for(int i = 0 ;i<n;i++) {
		cin>>a[i];
		if(i) {
			res = max(res,a[i]*a[i-1]);
		}
	}
	cout << res << endl;
}
/*-------------------------------------------------------------------------*/
int main() { 
	int T;
	scanf("%d",&T);
	while (T--)
	{
		solve();
	}
	return 0;
}
