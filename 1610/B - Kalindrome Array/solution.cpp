#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
bool ispal(const vector<int>& v) {
    int n = v.size();
 
    for (int i = 0; i < n; i++) {
        if (v[i] != v[n - 1 - i])
            return false;
    }
 
    return true;
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v(n);
    for (int& x : v) {
        cin >> x;
    }
 
    if (ispal(v)) {
        cout << "YES
";
        return;
    }
 
    int skip1 = 0, skip2 = 0;
 
    // Take the values from the first mismatching pair
    for (int i = 0; i < n; i++) {
        if (v[i] != v[n - 1 - i]) {
            skip1 = v[i];
            skip2 = v[n - 1 - i];
            break;
        }
    }
 
    // Try removing skip1
    int l = 0, r = n - 1;
    bool possible1 = true;
 
    while (l < r) {
        if (v[l] == v[r]) {
            l++;
            r--;
        } else if (v[l] == skip1) {
            l++;
        } else if (v[r] == skip1) {
            r--;
        } else {
            possible1 = false;
            break;
        }
    }
 
    if (possible1) {
        cout << "YES
";
        return;
    }
 
    // Try removing skip2
    l = 0;
    r = n - 1;
    bool possible2 = true;
 
    while (l < r) {
        if (v[l] == v[r]) {
            l++;
            r--;
        } else if (v[l] == skip2) {
            l++;
        } else if (v[r] == skip2) {
            r--;
        } else {
            possible2 = false;
            break;
        }
    }
 
    if (possible2) {
        cout << "YES
";
    } else {
        cout << "NO
";
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