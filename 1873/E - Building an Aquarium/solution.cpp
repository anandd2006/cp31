#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll &i:a)cin>>i;
    sort(all(a));
    ll level=a[0];
    for(int i=1;i<n;++i){
        ll cost=(a[i]-level)*i;
        if(cost<=x){
            x-=cost;
            level=a[i];
            
        }else{
            level+=x/i;
            cout<<level<<"
";
            return;
        }
    }
    level+=x/n;
    cout<<level<<"
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