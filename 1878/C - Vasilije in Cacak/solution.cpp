#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using i128 = __int128_t;
 
void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
 
    i128 mn = (i128)k * (k + 1) / 2;
    i128 mx = (i128)k * (2LL * n - k + 1) / 2;
 
    if ((i128)x >= mn && (i128)x <= mx)
        cout << "YES
";
    else
        cout << "NO
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}