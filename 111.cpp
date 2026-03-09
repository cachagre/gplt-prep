#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    for(int i=30;i>=0;i--){
        long long sum=0;
        long long flag=-1;
        for(long long j=1;;j++){
            long long t=1;
            bool overflow=false;
            for(int k=0;k<i;k++){
                t*=j;
                if(t>n){
                    overflow=true;
                    break;
                }
            }
            if(overflow) break;
            sum+=t;
            if(sum>n) break;
            if(sum==n){
                flag=j;
                break;
            }
        }
        if(flag!=-1){
            for(int q=1;q<=flag;q++){
                cout<<q<<'^'<<i;
                if(q!=flag) cout<<"+";
            }
            return;
        }
    }
    cout<<"Impossible for n.";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    cout.tie(NULL);
    solve();
}