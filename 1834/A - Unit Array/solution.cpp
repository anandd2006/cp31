#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n ;
    vector<int> v(n,0);
    int pos=0,neg=0;
    for(int &x:v){
        cin>>x;
        if(x==1){
            pos++;
        }else{
            neg++;
        }
    }
    int ans=0;
    while(neg>pos){
        neg--;
        pos++;
        ans++;
    }if(neg%2){
        ans++;
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