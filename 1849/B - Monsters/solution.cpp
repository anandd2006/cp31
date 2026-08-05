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
    int n,k;
    cin>>n>>k;
    vpii v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        int r=temp%k;
        if(r==0)r=k;
        v.push_back({r,i+1});
    }
    sort(all(v),[](const pii &a,const pii &b){
        if(a.first!=b.first){
            return a.first>b.first;
        }
        return a.second<b.second;
    });
    for(int i=0;i<n;i++){
        cout<<v[i].second<<" ";
    }
    cout<<"
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