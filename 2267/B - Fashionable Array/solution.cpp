#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin>>n;
    vector<int> freq(101,0);
    int maxfreq=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        freq[temp]++;
        maxfreq=max(maxfreq,freq[temp]);
    }
    for(int i=1;i<=maxfreq;i++){
        for(int j=100;j>=1;j--){
            if(freq[j]>=i)cout<<j<<" ";
        }
    }
    cout<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}