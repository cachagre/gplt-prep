#include<bits/stdc++.h>
using namespace std;
void solve(){
    int cnt[26]={0};
    int p[26]={0};
    string s;
    cin>>s;
    int t,q,sum=0;
    for(int i=0;i<26;i++){
        cin>>t;
        p[i]=t;
    }
    for(int i=0;i<s.length();i++){
        q=s[i]-'a';
        cnt[q]++;
        sum+=p[q];
    }

    for(int i=0;i<26;i++){
        cout<<cnt[i];
        if(i!=25) cout<<' ';
    }
    cout<<endl<<sum;
}

int main(){
    solve();
    return 0;
}