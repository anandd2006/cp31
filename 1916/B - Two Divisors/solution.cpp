#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
 
int lcm(int a,int b){
    return a/gcd(a,b)*b;
}
 
void solve() {
    int a,b;
    cin>>a>>b;
    
    int ans=lcm(a,b);
    if(lcm(a,b)==max(a,b)){
        ans*=b/a;
    }
    cout<<ans<<'
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T = 1;
    cin >> T;
 
    while (T--) {
        solve();
    }
 
    return 0;
}