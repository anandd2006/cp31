#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxlen=1;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }else{
            count=1;
        }
        maxlen=max(maxlen,count);
    }
    cout<<maxlen+1<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}