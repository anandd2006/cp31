#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int &x:v)cin>>x;
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }
    int sum=v[0];
    for(int i=1;i<n;i++){
        sum=sum^v[i];
    }
    if (!(n%2)){
        if(sum==0){
            cout<<sum<<endl;
        }else{
            cout<<-1<<endl;
        }
    }else{
        cout<<sum<<endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}