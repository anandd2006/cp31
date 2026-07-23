#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    while(s.size()>=2&&(s.front()!=s.back())){
        s=s.substr(1,s.size()-2);
    }
    cout<<s.size()<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}