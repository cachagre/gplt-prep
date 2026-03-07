#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int count[10]={0};
    for(int i=0;i<s.size();i++){
        count[s[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        if(count[i]>0){
            cout<<i<<":"<<count[i]<<endl;
        }
    }
}

int main(){
    solve();
}