#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
int value(int n)
{
 
    for (int i = 0; i < 1000; i++)
    {
        int sum = 0;
        while (n > 0)
        {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    return n;
}
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int op = n - k + 1;
    if (op == 1)
    {
        cout << max(v[0], v[n - 1]) << '
';
    }
    else
    {
        ll ans = 0;
        int l = k - 1, r = n - k;
        while (op--)
        {
            if (l == r)
            {
                ans += v[l];
                l = n - k + 1;
                r = k - 2;
                continue;
            }
            if (l > r)
            {
                ans += max(v[l], v[r]);
                l++;
                r--;
                continue;
            }
            if (v[l] >= v[r])
            {
                ans += v[l];
                l++;
            }
            else if (v[l] < v[r])
            {
                ans += v[r];
                r--;
            }
        }
        cout << ans << '
';
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}