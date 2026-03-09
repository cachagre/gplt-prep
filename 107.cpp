#include<bits/stdc++.h>
using namespace std;
void solve(){
     int t,s,p;
     cin>>t>>s>>p;
     if(t>=35&&s==1&&p>=33){
        cout<<"Bu Tie"<<endl<<t<<endl;
     }
     else if(t>=35&&s==0&&p>=33){
        cout<<"Shi Nei"<<endl<<t<<endl;
     }
     else if(t<35&&s==1||p<33){
        cout<<"Bu Re"<<endl<<p<<endl;
     }else if(t<35||(s==0&&p<33)){
        cout<<"Shu Shi"<<endl<<p<<endl;
     }
}

int main(){
    solve();
}

//答案是错的，重新写一个，改错太费眼睛了