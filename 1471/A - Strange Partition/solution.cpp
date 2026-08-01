#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    ll n ,d;
    cin>>n>>d;
    vll v(n,0);
    ll special=0;
    ll total=0;
    for(ll &x:v){
        cin>>x;
        special+=(x+d-1)/d;
        total+=x;
    }
    total=(total+d-1)/d;
    cout<<total<<" "<<special<<"
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