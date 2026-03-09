#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ans=1;
    while(ans*2<=n){
        ans*=2;
    }
    cout<<ans;
}

int main(){
    solve();
    return 0;
}