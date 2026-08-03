#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    string s;
    cin >> s;
 
    int nz = 0, no = 0;
    for (char c : s) {
        if (c == '0') nz++;
        else no++;
    }
 
    int i = 0;
while (i < s.size()) {
    if (s[i] == '0') {
        if (no == 0) break;
        no--;
    } else {
        if (nz == 0) break;
        nz--;
    }
    i++;
}
 
cout << s.size() - i << '
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