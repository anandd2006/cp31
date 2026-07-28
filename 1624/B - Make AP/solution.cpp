#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    int na=2*b-c;
    if(na>0&&na%a==0){
        cout<<"YES
";
        return;
    }
    int nc=2*b-a;
    if(nc>0&&nc%c==0){
        cout<<"YES
";
        return;
    }
    int nb=a+c;
    if(nb%2==0){
        nb/=2;
        if(nb%b==0&&nb>0){
            cout<<"YES
";
            return;
        }
    }
    cout<<"NO
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