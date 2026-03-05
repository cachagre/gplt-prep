#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<string> s(100);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int k;
    cin>>k;
    string dummy;
    getline(cin,dummy);
    string text="";
    getline(cin,text);
    string result;
    int count=0;
    for(int i=0;i<text.size();){
        bool match=false;  
        for(int j=0;j<n;j++){
           int  len=s[j].size();
           if(i+len<=text.size() && text.substr(i,len)==s[j]){
            count++;
            i+=len;
            match=true;
            result+="<censored>";
            break;
           }
        }
        if(!match){
            result+=text[i];
            i++;
        }
    }
    if(count>=k){
        cout<<count<<endl;
        cout<<"He Xie Ni Quan Jia!";
    }
    else{
        cout<<result;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
