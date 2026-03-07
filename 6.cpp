#include<bits/stdc++.h>
using namespace std;
void solve(){
    long n;
    cin>>n;
    long long maxlen=0;
    long long start=0;
    long long m=sqrt(n)+1;
    for(long long i=2;i<=m;i++){
        long long j=i;
        long long current=0;
        long long temp=1;
        while(1){
            temp*=j;
            if(n%temp==0){
                current++;
                j++;
            }
            else{
                break;
            }
            if(current>maxlen){
                maxlen=current;
                start=i;
            }
            }
        }
        if(maxlen==0){
            cout<<1<<endl;
            cout<<n;
        }
        else{
        cout<<maxlen<<endl;
        for(long long i=0;i<maxlen;i++){
            cout<<start+i;
            if(i!=maxlen-1){
                cout<<"*";
            }
        }
    }
}
int main(){
    solve();
}