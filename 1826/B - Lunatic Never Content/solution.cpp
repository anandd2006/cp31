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
	vector<int> v(n);
	for(int &x:v)cin>>x;
	
	int ans=0;
	for(int i=0;i<n/2;i++){
	    int diff=v[i]-v[n-1-i];
	    ans=gcd(ans,diff);
	}
	cout<<ans<<endl;
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