#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n, x;
    cin >> n >> x;
 
    vector<int> v(n);
    for (int& a : v) cin >> a;
 
    vector<int> primes;
    int temp = x;
 
    for (int p = 2; p * p <= temp; p++) {
        if (temp % p == 0) {
            primes.push_back(p);
            while (temp % p == 0) temp /= p;
        }
    }
    if (temp > 1) primes.push_back(temp);
 
    long long ans = 0;
 
    for (int p : primes) {
        long long sum = 0;
 
        for (int a : v) {
            if (a % p == 0) sum += a;
        }
 
        ans = max(ans, sum);
    }
 
    cout << ans << '
';
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}