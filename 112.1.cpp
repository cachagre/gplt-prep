#include<bits/stdc++.h>
using namespace std;
typedef tuple<int,int,int> tp;
void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<vector<int>>g(n,vector<int>(m));
    priority_queue<tp>pq;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>g[i][j];
            pq.push({g[i][j],i,j});
        }
    }
    set<int>h,l;
    while(k--){
        auto [t,x,y]=pq.top();pq.pop();
        while(1){
            if(h.count(x)||l.count(y)){
                auto [t1,x1,y1]=pq.top();pq.pop();
                x=x1,y=y1;
            }else{
                break;
            }
        }
        h.insert(x);l.insert(y);
    }
    for(int i=0;i<n;i++){
        if(h.count(i)) continue;
        int lst=-1;
        for(int j=0;j<m;j++){
            if(l.count(j)) continue;
            if(lst==-1) cout<<g[i][j];
            else cout<<" "<<g[i][j];
            lst=1;
        }
        cout<<"\n";
    }
}

int main(){
    solve();
}