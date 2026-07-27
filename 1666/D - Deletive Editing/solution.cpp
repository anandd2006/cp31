#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    string s, t;
    cin>>s>>t;
    if(t.size()==1&&s.find(t[0])!=string::npos){
        cout<<"YES
";
        return;
    }
    int j=s.size()-1;
    vector<int> f(26,0);
    for(int i=t.size()-1;i>=0;i--){
        bool found=false;
        while(j>=0){
            if(s[j]==t[i]){
                if(f[s[j]-'A']){
                    cout<<"NO
";
                    return;
                }
                found=true;
                j--;
                break;
            }else{
                f[s[j]-'A']++;
                j--;
            }
        }
        if(!found){
            cout<<"NO
";
            return;
        }
    }
    cout<<"YES
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