#include<bits/stdc++.h>
using namespace std;
void solve(){
    string t="<censored>";
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int k;
    cin>>k;
    string dummy;
    getline(cin,dummy);
    string text="";
    getline(cin,text);
    int count=0;
    for(int i=0;i<n;i++){
        size_t index=0;
        while((index=text.find(s[i],index))!=string::npos){
            count++;
            text.replace(index,s[i].length(),t);
            index+=t.length();
        }
    }
    if(count>=k){
        cout<<count<<endl;
        cout<<"He Xie Ni Quan Jia!";
    }
    else{
        cout<<text<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
