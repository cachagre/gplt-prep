#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    for(int i=31;i>=1;i--){
        int ans=0,ok=1;
        for(int j=1;j<=n;j++){
            ans+=pow(j,i);
            if(ans>n){
                ok=0;
                break;
            }else if(ans==n){
                break;
            }
        }
        ans=0;
        if(ok){
            for(int j=1;j<=n;j++){
                ans+=pow(j,i);
                if(ans!=n) cout<<j<<"^"<<i<<"+";
                else{
                    cout<<j<<"^"<<i;
                    break;
                }
            }
            exit(0);
        }
    }
    cout<<"Impossible for "<<n<<".";
}

void solve1(){
    int n;
    cin>>n;
    for(int i=31;i>=1;i--){
        int ok=1;
        int sum=0;
        for(int j=1;j<=n;j++){
            sum+=pow(j,i);
            if(sum>n){
                ok=0;
                break;
            }else if(sum==n){
                break;
            }
        }
        if(ok){
            sum=0;
            for(int k=1;k<=n;k++){
                sum+=pow(k,i);
                if(sum!=n){
                    cout<<k<<'^'<<i<<'+';
                }
                else{
                    cout<<k<<'^'<<i;
                    break;
                }
            }
            return;
        }
    }
    cout<<"Impossible for "<<n<<'.';
}

int main(){
    solve();
}