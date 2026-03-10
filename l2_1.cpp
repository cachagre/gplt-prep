#include<bits/stdc++.h>
using namespace std;
stack<int> st;
void solve(){
	int n;
	cin>>n;
    while(n--){
    	int x;
    	cin>>x;
    	while(!st.empty()&&st.top()==x){
            st.pop();
            x*=2;    		
		}
        st.push(x);	
	}
	cout<<st.size();
}

int main(){
	solve();
}
