#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v;
    if(x==0&&y==0){
        cout<<0<<'
';
        return;
    }
    ll lcm=(x/gcd(x,y))*y;
    ll p=n/lcm;
    ll r=n/x-p;
    ll b=n/y-p;
    ll a=r*(2*n-r+1)/2;
    ll c=b*(b+1)/2;
    cout<<a-c<<'
';
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