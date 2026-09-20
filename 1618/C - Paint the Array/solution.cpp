#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll &x : v) cin >> x;
 
    ll even = 0, odd = 0;
    for (int i=0;i<n;i+=2) {
        odd=gcd(odd, v[i]);
    }
    for (int i=1;i<n;i+=2) {
        even=gcd(even, v[i]);
    }
    bool valideven= true;
    for (int i=0;i<n;i+=2) {
        if(v[i]%even==0){
            valideven=false;    
            break;
        }
    }
    if(valideven){
        cout<<even<<"
";
        return;
    }
    bool validodd=true;
    for (int i=1;i<n;i+=2) {
        if(v[i]%odd==0){
            validodd=false;
            break;
        }
    }
    if(validodd){
        cout<<odd<<"
";
        return;
    }else{
        cout<<0<<"
";
        return;
    }
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