#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int f1=0;
    int f2=0;
    int len=s.length();
    int count=0;
    if((s[len-1]-0)%2==0) f2=1;
    if(s[0]=='-') {
        len--;
        f1=1;
    }
    for(char c:s){
        if(c=='2') count++;
    }

    float ans=count/(float)len;
    if(f1) ans*=1.5;
    if(f2) ans*=2;
    ans*=100;
    printf("%.2f%%\n",ans);
}

int main(){
    solve();
}