#include<bits/stdc++.h>
using namespace std;
vector<int> pre,post;
bool isM=false;
void getpost(int root,int tail,bool ism){
    if(root>tail) return;
    int i=root+1;
    int j=tail;
    if(!ism){
        while(i<=tail&&pre[i]<pre[root]) i++;
        while(j>root&&pre[j]>=pre[root]) j--;
    }else{
        while(i<=tail&&pre[i]>=pre[root]) i++;
        while(j>root&&pre[j]<pre[root]) j--;
    }

    if(i-j!=1) return;
    getpost(root+1,j,ism);
    getpost(i,tail,ism);
    post.push_back(pre[root]);
}

void solve(){
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        pre.push_back(x);
    }
    getpost(0,n-1,isM);
    if(post.size()!=n){
        post.clear();
        isM=true;
        getpost(0,n-1,isM);
    }
    if(post.size()==n){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<post[i];
            if(i!=n-1) cout<<' ';
        }
        cout<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

int main(){
    solve();
    return 0;
}