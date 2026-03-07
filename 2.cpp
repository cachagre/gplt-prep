#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    char c;
    cin>>c;
    int m=sqrt((n+1)/2);
    int count=n-2*m*m+1;
    for(int i=m;i>=1;i--){
        for(int j=0;j<m-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<c;
        }
        cout<<endl;
        }

        for(int i=2;i<=m;i++){
            for(int j=0;j<m-i;j++){
                cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<c;
        }
        cout<<endl;
        }
    cout<<count;
}
int main(){
    solve();
}