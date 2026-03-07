#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    long sum=0;
    int temp=0;
    for(int i=a;i<=b;i++){
        printf("%5d",i);
        temp++;
        sum+=i;
        if(temp%5==0){
            cout<<endl;
            temp=0;
        }
    }
   if(temp!=0) cout<<endl;
    cout<<"Sum = "<<sum;

}

int main(){
    solve();
}