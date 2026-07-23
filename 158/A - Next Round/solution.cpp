#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    k=v[k-1];
    int count=0;
    for(int x:v){
        if(x>=k&&x>0){
            count++;
        }else{
            continue;
        }
    }
    cout<< count;
    return 0;
}