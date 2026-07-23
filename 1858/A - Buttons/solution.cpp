#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--){
        vector<int>v(3,0);
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        if(v[0]<v[1]&&v[2]%2!=0){
            cout<<"Second"<<endl;
        }else if(v[0]<=v[1]&&v[2]%2==0){
            cout<<"Second"<<endl;
        }else {
            cout << "First
";
        }
    }
    return 0;
}