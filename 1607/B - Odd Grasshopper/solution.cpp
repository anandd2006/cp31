#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
void solve() {
    ll x,n;
    cin>>x>>n;
    ll r = n % 4;
 
if (x % 2 == 0) {
    if (r == 0) cout << x;
    else if (r == 1) cout << x - n;
    else if (r == 2) cout << x + 1;
    else cout << x + n + 1;
} else {
    if (r == 0) cout << x;
    else if (r == 1) cout << x + n;
    else if (r == 2) cout << x - 1;
    else cout << x - n - 1;
}
cout << '
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