#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll &x:v)cin>>x;
    sort(all(v));
    if(v[0]!=1){
        cout<<"NO
";
        return;
    }
    ll a=1;
    for(int i=1;i<n;i++){
 
        if(v[i]>a){
            cout<<"NO
";
            return;
        }
        a+=v[i];
        
    }
    cout<<"YES
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