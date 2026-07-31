#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    ll a,b;
    cin>>a>>b;
    ll d=abs(a-b);
    if (d == 0) {
    cout << "0 0
";
    return;
}
 
ll rem = a % d;
ll k = min(rem, d - rem);
 
cout << d << " " << k << "
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