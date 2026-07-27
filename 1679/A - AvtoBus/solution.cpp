#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    ll n;
    cin>>n;
    if(n%2ll==1||n==2){
        cout<<-1<<endl;
    }else if(n%6ll==0){
        cout<<n/6ll<<" "<<n/4ll<<endl;
    }else if(n%6ll==2||n%6ll==4){
        cout<<(n/6ll)+1<<" "<<n/4ll<<endl;
    }
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