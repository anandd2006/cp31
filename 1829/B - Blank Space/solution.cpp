#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int &x:v)cin>>x;
    int ans=0;
    int count=0;
    int i=0;
    while(i<n){
        if(v[i]==0){
            count++;
        }else{
            count=0;
        }
        ans=max(ans,count);
        i++;
    }
    cout<<ans<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}