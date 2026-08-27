#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n,q;
    cin >> n>>q;
    vector<ll> a(n);
    vector<int> x(q);
    for(ll &i:a)cin>>i;
    for(int &i:x)cin>>i;
    
    int mini=31;
    for(int i=0;i<q;i++){
        if(x[i]>=mini)continue;
        mini=x[i];
        for(int j=0;j<n;j++){
            if(a[j]%(1ll<<x[i])==0){
                a[j]+=1ll<<x[i]-1;
            }
        }
    }
    for(ll x:a)cout<<x<<" ";
    cout<<endl;
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