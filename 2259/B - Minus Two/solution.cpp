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
    vector<ll>v(n);
    int odd=0,div40=0,div42=0;
    for(ll &x:v){
        cin>>x;
        if(x%2!=0)odd++;
        if(x%4==0)div40++;
        if(x%4==2)div42++;
    }
    int ans=max({odd,div42,div40});
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