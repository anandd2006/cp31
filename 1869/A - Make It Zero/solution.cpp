#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int &x:v)cin>>x;
    if (n % 2 == 0) {
        cout << 2 << '
';
        cout << 1 << " " << n << '
';
        cout << 1 << " " << n << '
';
    } else {
        cout << 4 << '
';
        cout << 1 << " " << n - 1 << '
';
        cout << 1 << " " << n - 1 << '
';
        cout << 2 << " " << n << '
';
        cout << 2 << " " << n << '
';
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}