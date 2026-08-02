#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
 
void solve() {
    int n;
    cin >> n;
    vi p(n);
 
    for (int &x : p) cin >> x;
 
    vi left(n, -1);
 
    int mn = 0;
    for (int i = 1; i < n; i++) {
        if (p[mn] < p[i])
            left[i] = mn;
        if (p[i] < p[mn])
            mn = i;
    }
 
    int right = n - 1;
 
    for (int j = n - 2; j >= 1; j--) {
        if (p[right] < p[j] && left[j] != -1) {
            cout << "YES
";
            cout << left[j] + 1 << " " << j + 1 << " " << right + 1 << "
";
            return;
        }
 
        if (p[j] < p[right])
            right = j;
    }
 
    cout << "NO
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}