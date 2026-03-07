#include<bits/stdc++.h>
using namespace std;
void solve(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    bool st[256]={0};
    for(int i=0;i<b.length();i++){
        st[b[i]]=1;
    }
    for(int i=0;i<a.length();i++){
        if(!st[a[i]]){
            cout<<a[i];
        }
    }
}

int main(){
    solve();
}