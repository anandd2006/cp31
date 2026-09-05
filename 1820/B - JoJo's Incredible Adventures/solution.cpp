#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    string s;
    cin>>s;
    int n=s.size();
    s+=s;
    int count=0;
    int len=0;
    for(int i=0;i<2*n;i++){
        if(s[i]=='0'){
            count=0;
        }else{
            count++;
        }
        len=max(len,count);
    }
    if (len == 2 * n) {
        cout << 1LL * n * n << "
";
        return;
    }
    if(len==0){
        cout<<0<<"
";
        return;
    }
    if(len==1){
        cout<<1<<"
";
        return;
    }
    ll oper=len/2;
    ll rem=len%2;
    ll step=1;
    ll ans=0;
    while(oper--){
        ans+=step*2;
        step++;
    }
    if(rem){
        ans+=step;
    }
    cout<<ans<<"
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