#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
 
void solve() {
    int n;
    string s;
    cin>>n>>s;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            cout << "YES
";
            cout << i + 1 << " " << i + 2 << "
";
            return;
        }
    }
    cout<<"NO
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}