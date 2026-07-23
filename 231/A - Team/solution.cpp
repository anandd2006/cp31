#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(3));
    for (int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int temp;
            cin>>temp;
            v[i][j]=temp;
        }
    }
    vector<int> know;
    for (int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=v[i][j];
        }
        know.push_back(sum);
    }
    int ans=0;
    for(int i=0;i<know.size();i++){
        if(know[i]>1)ans++;
        else continue;
    }
    cout<<ans;
    return 0;
}