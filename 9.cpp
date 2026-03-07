#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    a=abs(a);
    b=abs(b);
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n;
    cin>>n;
    long long a=0,b=1;
    for(int i=0;i<n;i++){
        long long fz,fm;
        char c;
        cin>>fz>>c>>fm;
        long long d=gcd(fz,fm);
        fz/=d;
        fm/=d;
        long long e=gcd(b,fm);
        long long m1=fm/e;
        long long m2=b/e;
        a=a*m1+fz*m2;
        b=b*m1;

        long long f=gcd(a,b);
        a/=f;
        b/=f;

    }
    if(a==0){
        cout<<0;
        return;
    }

    int q=a/b;
    a=a-q*b;
    if(q!=0){
        cout<<q;
        if(a!=0){
            cout<<" "<<a<<"/"<<b;
        }
    }
    else{
        cout<<a<<"/"<<b;
    }
   }

int main(){
    solve();
}
