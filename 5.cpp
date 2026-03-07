#include<bits/stdc++.h>
using namespace std;
struct st{
    string id;
    int a;
    int b;
};

bool cmp(st& x, st& y){
    return x.a<y.a;

}

void solve(){
    int n;
    cin>>n;
    st arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].id>>arr[i].a>>arr[i].b;
    }
    sort(arr,arr+n,cmp);
    int k;
    cin>>k;
    int ar[k];
    for(int i=0;i<k;i++){
        cin>>ar[i];
        cout<<arr[ar[i]-1].id<<" "<<arr[ar[i]-1].b<<endl;
    }
}

int main(){
    solve();
     return 0;
}