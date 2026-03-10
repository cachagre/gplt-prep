#include<bits/stdc++.h>
using namespace std;

long long pp(long long n){
	long long ans=1;
	for(long long i=2;i*i<=n;i++){
		if(n%i==0) ans+=(i+n/i);
	}
	return ans;
}

void solve(){
	long long ans[30];
	long long n;
	cin>>n;
    if(n==6){
        cout<<"6"<<endl;
        return;
    }
	int flag=n;
	int len=0;
	ans[len]=n;
	len++;
	while(1){
		if(len>=29) break;
		if(pp(n)==flag) break;
		ans[len]=pp(n);
		len++;
		n=pp(n);
	}
	if(len>=29) cout<<"-1"<<endl;
	else{
		for(int i=0;i<len;i++){
			cout<<ans[i];
			if(i!=len-1) cout<<' ';
		}
		cout<<endl;
	}
} 


int main(){
	solve();
}