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
    int a,b;
    cin>>a>>b;
    int ans=a;
    int x;
 
int n = a - 1;
 
if(n % 4 == 0) x = n;
else if(n % 4 == 1) x = 1;
else if(n % 4 == 2) x = n + 1;
else x = 0;
if(x == b)
    cout << a << '
';
else if((x ^ b) == a)
    cout << a + 2 << '
';
else
    cout << a + 1 << '
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