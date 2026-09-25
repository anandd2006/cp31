#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    char c;
    string s;
    cin>>n>>c>>s;
    string temp=s;
    reverse(all(temp));
    int count =0;
    for(int i=0;i<n;i++){
        if(temp[i]==c&&s[i]!=temp[i])count++;
        else if(s[i]!=c&&s[i]!=temp[i])count++;
    }
    if(count==0){
        cout<<0<<'
';
        return;
    }else{
        cout<<count<<'
';
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