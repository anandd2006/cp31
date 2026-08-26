#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin>>n;
    vector<pair<int,bool>>a(n,{0,false});
    for(int i=0;i<n;i++){
        cin>>a[i].first;
    }
    for(int i=0;i<n-1;i++){
        if((a[i].first%2==0&&a[i+1].first%2==0)||(a[i].first%2!=0&&a[i+1].first%2!=0)){
            a[i+1].second=true;
        }
    }
    ll ans=LLONG_MIN;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(a[i].second){
            sum=0;
            
        }
        sum=max(1ll*a[i].first,sum+a[i].first);
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
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