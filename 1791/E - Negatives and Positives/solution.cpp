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
    ll ans=0;
    int nc=0,zero=0,mini=INT_MAX;
    for(int i=0;i<n;++i){
        int temp;
        cin>>temp;
        if(temp<0)nc++;
        if(temp==0)zero++;
        mini=min(mini,abs(temp));
        ans+=1ll*abs(temp);
    }
    if(zero>0||nc%2==0){
        cout<<ans<<"
";
        return;
    }
        cout<<ans-2ll*mini<<"
";
        return;
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