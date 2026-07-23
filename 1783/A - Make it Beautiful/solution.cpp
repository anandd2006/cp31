#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v(n);
    for (int &x : v) cin >> x;
 
    sort(v.begin(), v.end(), greater<int>());
 
    if (v[0] == v[n - 1]) {
        cout << "NO
";
        return;
    }
 
    long long sum = v[0];
 
    for (int i = 1; i < n; i++) {
        if (sum == v[i]) {
            swap(v[i], v[n - 1]);
        }
        sum += v[i];
    }
 
    cout << "YES
";
    for (int x : v) cout << x << " ";
    cout << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}