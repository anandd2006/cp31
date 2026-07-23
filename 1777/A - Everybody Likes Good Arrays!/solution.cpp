#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int &x:v)cin>>x;
    int count=0;
    vector<int>a;
    for(int i=0;i<n-1;i++){
        if((v[i]%2==0&&v[i+1]%2==0)||(v[i]%2==1&&v[i+1]%2==1)){
            count++;
        }
    }
    cout<<count<<endl;
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