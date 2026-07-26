#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    int n;
    cin>>n;
    vector<int> v(n,0);
 
    for(int &x:v){
        cin>>x;
        
    }
        int cnt=0;
        bool inside=false;
        for(int i=0;i<n;i++){
            if(v[i]!=0&&!inside){
                cnt++;
                inside=true;
            }
            if(v[i]==0){
                inside=false;
            }
        }
        cout<<min(cnt,2)<<endl;
    
    
    
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