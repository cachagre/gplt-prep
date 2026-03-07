#include<bits/stdc++.h>
using namespace std;
void solve(){
    int arr[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int z[11]={0,1,2,3,4,5,6,7,8,9,10};
    char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.length()-1;i++){
            sum+=(s[i]-'0')*arr[i];
        }
        int z=sum%=11;
        if(s[17]!=m[z]){
            cout<<s<<endl;
        }
    }
}

int main(){
    solve();
}
