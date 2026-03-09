#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int n,m,t;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>t;
        s.push_back(char(t+'a'-1));
    }
    int op;
    while(m--){
        cin>>op;
        if(op==1){
            int x;
            cin>>x;
            int len1=x;
            string t1;
                while(x--){
                int k;
                cin>>k;
                t1.push_back(char(k+'a'-1));
                }

                cin>>x;
                int len2=x;
                string t2;
                while(x--){
                    int j;
                    cin>>j;
                    t2.push_back(char(j+'a'-1));
                }
            
                if(s.find(t1)!=string::npos){
                    s.replace(s.find(t1),len1,t2);
                }else{
                    continue;
                }
        }else if(op==2){
            string ne;
            for(int i=0;i<s.length()-1;i++){
                int x=(s[i]-'a'+1)+(s[i+1]-'a'+1);
                if(x%2==0){
                    ne.push_back(s[i]);
                    ne.push_back(char(x/2+'a'-1));
                }else{
                    ne.push_back(s[i]);
                }
            }
            ne.push_back(s.back());
            s=ne;
        }else{
              int l,r;
              cin>>l>>r;
              l--;
              reverse(s.begin()+l,s.begin()+r);
        }
    }

    for(int i=0;i<s.length();i++){
        cout<<(s[i]-'a'+1);
        if(i!=s.length()-1) cout<<' ';
    }
}

int main(){
    solve();
}