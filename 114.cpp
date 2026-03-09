#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    int next;
}nodes[100005];
void solve(){
    int head,n;
    cin>>head>>n;
    for(int i=0;i<n;i++){
        int addr,val,next;
        cin>>addr>>val>>next;
        nodes[addr].val=val;
        nodes[addr].next=next;
    }
    vector<int> kept,removed;
    bool visited[100005]={false};
    int cur=head;
    while(cur!=-1){
         int t=abs(nodes[cur].val);
         if(!visited[t]){
            visited[t]=true;
            kept.push_back(cur);
         }else{
            removed.push_back(cur);
         }
         cur=nodes[cur].next;
    }
    for(int i=0;i<kept.size();i++){
        if(i!=kept.size()-1){
            printf("%05d %d %05d\n",kept[i],nodes[kept[i]].val,kept[i+1]);
    }else{
            printf("%05d %d -1\n",kept[i],nodes[kept[i]].val);
        }
    }
    for(int i=0;i<removed.size();i++){
        if(i!=removed.size()-1){
            printf("%05d %d %05d\n",removed[i],nodes[removed[i]].val,removed[i+1]);
        }else{
            printf("%05d %d -1\n",removed[i],nodes[removed[i]].val);
        }
    }
}

int main(){
    solve();
}