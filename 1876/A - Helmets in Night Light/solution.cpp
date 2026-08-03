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
    int n,p;
    cin>>n>>p;
    vector<int>a(n,0),b(n,0);
    for(int &x:a)cin>>x;
    for(int &x:b)cin>>x;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        vp.push_back({b[i],a[i]});
    }
    sort(vp.begin(),vp.end());
    long long cost = p;
    int invited=1;
    for(int i=0;i<n&&invited<n;i++){
        if(vp[i].first>=p){
            break;
        }
        int take=min(vp[i].second,n-invited);
        invited+=take;
        cost += 1LL * vp[i].first * take;
 
    }
cost += 1LL * p * (n - invited);
    cout<<cost<<"
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