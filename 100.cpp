#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    int s=0;
    for(int i=0;i<m;i++){
       int t;
       cin>>t;
       s+=t;
    }
    int ans=max(0,s-n*(m-1));
    cout<<ans;
}

int main(){
    solve();
}