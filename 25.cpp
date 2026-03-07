#include<bits/stdc++.h>
using namespace std;
int right(string s){
    int sum=0;
    for(char c:s){
        if(!isdigit(c)) return 0;
        sum=sum*10+(c-'0');
    }
    return sum>0&&sum<=1000 ? sum : 0;
}

void solve(){
    string s;
    getline(cin,s);
    int p=s.find(' ');
    string a=s.substr(0,p);
    string b=s.substr(p+1);

    if(right(a)) cout<<a;else cout<<"?";
    cout<<" + ";
    if(right(b)) cout<<b;else cout<<"?";
    cout<<" = ";
    if(right(a)&&right(b)) cout<<right(a)+right(b);else cout<<"?";
     cout<<endl;    

}

int main(){
    solve();
}