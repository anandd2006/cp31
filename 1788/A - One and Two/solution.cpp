#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int one=0,two=0;
    vector<int> v(n);
    for (int &x : v) {
        cin>>x;
        if(x==1)one++;
        else two++;
    }
    
    if(!two){
        cout<<1<<endl;
    }else if(two%2==1){
        cout<<-1<<endl;
    }else{
        int k=0;
        int target=two/2;
        int pro=0;
        for(int i=0;i<n;i++){
            if(v[i]==2)pro++;
            k++;
            if(pro==target){
                cout<<k<<endl;
                return;
            }
 
        }
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