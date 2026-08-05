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
    int n;
    cin>>n;
    int size=n;
    vector<vector<int>> v;
    while(size--){
        int m;
        cin>>m;
        vector<int> temp(m,0);
        for(int &x:temp)cin>>x;
        sort(all(temp));
        v.push_back(temp);
    }
    ll sum=0;
    int mn1=INT_MAX,mn2=INT_MAX;
    for(int i=0;i<n;i++){
        sum+=1ll*v[i][1];
        mn1=min(mn1,v[i][0]);
        mn2=min(mn2,v[i][1]);
    }
    sum=sum-1ll*mn2+1ll*mn1;
    cout<<sum<<"
";
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