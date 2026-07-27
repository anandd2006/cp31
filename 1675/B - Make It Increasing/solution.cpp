#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
bool check(vector<int>& v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        if(v[i]>=v[i+1])return false;
    }
    return true;
}
 
void solve() {
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int &x:v)cin>>x;
    if(n==1||check(v))cout<<0<<endl;
    else{
        int ans=0;
        for(int i=n-2;i>=0;i--){
            while(v[i]>=v[i+1]&&v[i]!=0){
                ans++;
                v[i]/=2;
            }if(v[i]>=v[i+1]){
                cout<<-1<<endl;
                return;
            }
        }
        cout<<ans<<endl;
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