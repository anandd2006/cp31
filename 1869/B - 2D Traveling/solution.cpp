#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<ll> x(n),y(n);
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    a--;b--;
    ll ans=llabs(x[a]-x[b])+llabs(y[a]-y[b]);
    ll mx=LLONG_MAX/2,mn=LLONG_MAX/2;
    
    for(int i=0;i<k;i++){
        mn=min(mn,abs(x[a]-x[i])+abs(y[a]-y[i]));
        mx=min(mx,abs(x[b]-x[i])+abs(y[b]-y[i]));
        
    }ans=min(ans,mn+mx);
    cout<<ans<<endl;
    return;
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