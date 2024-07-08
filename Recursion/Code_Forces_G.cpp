#include<bits/stdc++.h>
using namespace std;
void pyramid(int N,int p){
    if(p==0)    return;
    pyramid(N,p-1);
    for(int i = 0;i<(N-(2*p-1))/2;i++){
        cout<<" ";
    }
    for(int i = 0;i<2*p-1;i++){
        cout<<"*";
    }
    for(int i = 0;i<(N-(2*p-1))/2;i++){
        cout<<" ";
    }
    cout<<"\n";
}
int main(){
    int n;
    cin>>n;
    pyramid(n,n);
}