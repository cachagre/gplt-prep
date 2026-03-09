#include<bits/stdc++.h>
using namespace std;;
vector<long long> ans;
vector<long long> p;
long long n,l,r;

void dfs(int pos ,long long num){
    if(num%pos!=0) return ;
    int len=n-pos;
    long long minnum=num*p[len];
    long long maxval=minnum+p[len]-1;
    if(maxval<l||minnum>r) return;

    if(pos==n){
        ans.push_back(num);
        return;
    }

    for(int i=0;i<=9;i++){
        dfs(pos+1,num*10+i);
    }
}

void solve(){
    cin>>n>>l>>r;

    p.assign(n+1,1);
    for(int i=1;i<=n;i++){
        p[i]=p[i-1]*10;
    }
    for(int i=1;i<=9;i++){
        dfs(1,i);
    }

    if(ans.empty()){
        cout<<"No Solution"<<endl;
    }else{
        for(auto x:ans){
            cout<<x<<endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
   