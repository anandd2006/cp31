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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
    {
        cin >> x;
        x = value(x);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
                ans++;
        }
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
    {
        solve();
    }
 
    return 0;
}