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
    if(k<n||k > 2 * n-1){
        cout<<-1<<"
";
        return;
    }
    vector<vector<int>>v(n,vector<int>(n,0));
    int com=2*n-k;
    int val=1;
    for(int i=0;i<com;i++){
        v[i][i]=val;
        val++;
    }
    for(int i=com;i<n;i++){
        v[i][0]=val;
        val++;
    }
    for(int j=com;j<n;j++){
        v[0][j]=val;
        val++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==0){
                v[i][j]=val;
                val++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"
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