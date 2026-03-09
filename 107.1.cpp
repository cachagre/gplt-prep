#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b==1){
        if(a>=35&&c>=33){
            cout<<"Bu Tie"<<endl<<a<<endl;
        }else if(a<35||c<33){
            cout<<"Bu Re"<<endl<<c<<endl;
        }
    }else{
        if(a>=35&&c>=33){
            cout<<"Shi Nei"<<endl<<a<<endl;
        }else if(a<35||c<33){
            cout<<"Shu Shi"<<endl<<c<<endl;
        }
    }
}

int main(){
    solve();
}