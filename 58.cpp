#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin,s);
    int count=0;
    int len=s.length();
    for(int i=0;i<=len;i++){
        if(i<len&&s[i]=='6'){
            count++;
        }
        else{
            if(count>0){
                if(count>9){
                    cout<<"27";
                }
                else if(count>3){
                    cout<<'9';
                }
                else{
                    for(int j=0;j<count;j++){
                        cout<<'6';
                    }
                }
            }
            count=0;
            if(i<len){
                cout<<s[i];
            }
        }
    }
}

int main(){
    solve();
}