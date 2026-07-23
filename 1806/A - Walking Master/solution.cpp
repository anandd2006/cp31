#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<b){
        cout<<-1<<endl;
        return;
    }
    int ans=d-b;
    a+=ans;
    if(c>a){
        cout<<-1<<endl;
        return;
    }
    ans += a - c;
 
    cout << ans << '
';
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}