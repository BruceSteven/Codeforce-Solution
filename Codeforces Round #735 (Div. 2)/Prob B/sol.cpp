
#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define rep(i,a,n) for(int i = a;i<n;i++) 
#define _rep(j,a,n) for(int j = a;j<=n;j++) 
#define all(x) x.begin(),x.end()
#define SORT(x) sort(all(x))
const long double PI = 3.141592653589793;
const ll mod = 998244353;
void solve() {	  
	int n,k;
	cin>>n>>k;
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++) cin>>a[i];
    ll ans = -1e12;
	int l = max(1,n-2*k);
	for(int i = l;i<=n;i++) {
		for(int j = i+1;j<=n;j++) {
			ans = max(ans,1LL*i*j-1LL*k*(a[i] | a[j]));
		}
    }
    cout << ans << endl;
	}
int32_t main() { 
	int T; cin>>T;
	while (T--) solve();
    return 0;
}	
