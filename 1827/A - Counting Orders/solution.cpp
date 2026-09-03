#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
	int n;
	cin>>n;
	vector<int> a(n), b(n);
 
	for (int &x : a) cin >> x;
	for (int &x : b) cin >> x;
 
	sort(all(a));
	sort(all(b));
	ll ans=1;
	for(int i=n-1; i>=0; i--) {
		int l=0,r=n-1;
		int pos=n;
		while(l<=r) {
			int mid=l+(r-l)/2;
			if(a[mid]>b[i]) {
				pos=mid;
				r=mid-1;
			} else {
				l=mid+1;
			}
 
		}
		int greater=n-pos;
		int used=n-i-1;
		int choices=greater-used;
		if(choices<=0) {
			ans=0;
			break;
		}
		ans=(1ll*(ans*choices)%MOD);
	}
	cout<<ans<<"
";
}
 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int t;
	cin >> t;
 
	while (t--) {
		solve();
	}
 
	return 0;
}