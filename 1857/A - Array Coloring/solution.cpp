#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int odd = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2) odd++;
    }
 
    if (odd % 2 == 0)
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