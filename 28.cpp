#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    int limit=sqrt(n);
    for(int i=2;i<=limit;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(isprime(x)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
int main(){
    solve();
}