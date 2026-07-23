#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<string> words;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        words.push_back(temp);
    }
    for(string s:words){
        if(s.size()<=10){
            cout<<s<<endl;
        }else{
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;;
        }
    }
    return 0;
}