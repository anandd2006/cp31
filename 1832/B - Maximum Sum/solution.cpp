#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n),pref;
    for(ll &x:v)cin>>x;
    sort(all(v));
    ll sum=0;
    for(ll &x:v){
        sum+=x;
        pref.push_back(sum);
    }
    ll ans=0;
    int l=0,r=n-1-k;
    int i=0;
    while(i<=k){
        ans=max(ans,pref[r]-(l > 0 ? pref[l - 1] : 0));
        r++;
        l+=2;
        i++;
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