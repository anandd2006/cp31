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
    vector<ll> v(n);
    vector<ll> pref;
    pref.push_back(0);
    ll total=0;
    for(ll &x:v){
        cin>>x;
        total+=x;
        pref.push_back(total);
    }
    ll ans=0;
    for(int i=1;i<n;++i){
        ll left=pref[i];
        ll right=pref[n]-pref[i];
        ans=max(ans,gcd(left,right));           
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