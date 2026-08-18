#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m,0));
    bool zero=false;
    int neg=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]<0)neg++;
            if(v[i][j]==0)zero=true;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=abs(v[i][j]);
        }
    }
    int val=INT_MAX;
    if(zero==false&&neg%2!=0){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                val=min(val,abs(v[i][j]));
            }
        }
        cout<<sum-2*val<<endl;
        return;
    }
    cout<<sum<<"
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