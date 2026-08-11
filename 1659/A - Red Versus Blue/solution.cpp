#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n,r,b;
    cin>>n>>r>>b;
    int lim = r/(b+1), rem=r%(b+1);
    string s;
    int count=0;
    for(int i=0;i<n;i++){
        if(b==0)break;
        if(count==lim+(rem>0)){
            s.push_back('B');
            b--;
            count=0;
            if(rem>0)rem--;
        }else{
            s.push_back('R');
            r--;
            count++;
        }
    }
    while(r--)
        s.push_back('R');
    
    for(char x:s){
        cout<<x;
    }
    cout<<"
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