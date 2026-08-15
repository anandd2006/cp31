#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    int best=0;
    
    for(int i=0;i<m;i++){
        for(int len=1;i+len<=m;len++){
            string s=b.substr(i,len);
            if(a.find(s)!=string::npos){
                best=max(best,len);
            }
        }
    }
    cout<<n+m-2*best<<"
";
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