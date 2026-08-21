#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
bool isfair(ll n){
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')continue;
        if(n%(s[i]-'0')!=0)return false;
    }
    return true;
}
 
void solve() {
    ll n;
    cin>>n;
    ll temp=n;
    while(!isfair(temp)){
        temp++;
    }
    cout<<temp<<"
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