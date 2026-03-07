#include<bits/stdc++.h>
using namespace std;
bool hs[100000];
void solve(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        for(int i=0;i<k;i++){
            int t;
            cin>>t;
            if(k>1){
                hs[t]=true;
            }
        }
    }

    int m;
    cin>>m;
    bool flag=false;
    while(m--){
        int t;
        cin>>t;
        if(!hs[t]){
            if(flag){
                cout<<" ";
            }
            flag=true;
            printf("%05d",t);
            hs[t]=true;
        }
    }
    if(!flag){
        cout<<"No one is handsome";
    }
     cout<<endl;
}

int main(){
    solve();
}