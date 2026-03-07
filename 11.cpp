#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    long long ans=0;
    long long t=1;
    for(int i=1;i<=n;i++){
        t*=i;
        ans+=t;
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}