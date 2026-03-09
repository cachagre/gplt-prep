#include<bits/stdc++.h>
using namespace std;
struct tp{
    int val;
    int x;
    int y;
    bool operator <(const tp &other) const {
        return val<other.val;
    }
};

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> g(n,vector<int>(m));
    priority_queue<tp> pq;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>g[i][j];
            pq.push({g[i][j],i,j});
        }
    }

    set<int> h,l;
    while(k--){
        tp t=pq.top();
        pq.pop();
        while(1){
            if(h.count(t.x)||l.count(t.y)){
                t=pq.top();
                pq.pop();
            }else{
                break;
            }
        }
        h.insert(t.x);
        l.insert(t.y);
    }
    for(int i=0;i<n;i++){
        if(h.count(i)) continue;
        int flag=0;
        for(int j=0;j<m;j++){
            if(l.count(j)) continue;
            if(flag) cout<<" ";
            cout<<g[i][j];
            flag=1;
        }
        cout<<endl;
    }

}

int main(){
    solve();
}