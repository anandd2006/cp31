#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<vector<int>> v(n,vector<int>(n));
    for(vector<int> &x:v){
        for(int &y:x){
            cin>>y;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]!=v[n-1-i][n-1-j]){
                count++;
            }
        }
    }
    count/=2;
    if(count>k||(n%2==0&&(k-count)%2!=0)){
        cout<<"NO
";
    }else{
        cout<<"YES
";
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