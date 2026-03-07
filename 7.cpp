#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string ans[33];
    int len=0;
    int n;
    cin>>n;
    if(n==0){
        cout<<"ling";
        return;
    }
    if(n<0){
        cout<<"fu ";
        n=-n;
    }
    while(n){
        ans[len]=s[n%10];
        n/=10;
        len++;
    }
    for(int i=len-1;i>=0;i--){
        cout<<ans[i];
        if(i!=0){
            cout<<" ";
        }
    }
}

int main(){
    solve();
}
