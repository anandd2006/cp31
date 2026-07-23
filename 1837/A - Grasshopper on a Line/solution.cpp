#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x, k;
    cin >> x >> k;
 
    if (x % k != 0) {
        cout << 1 << "
";
        cout << x << "
";
    } else {
        cout << 2 << "
";
        cout << x - 1 << " " << 1 << "
";
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