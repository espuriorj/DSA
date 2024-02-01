#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void sequence(int n){
    if(n==1){
        cnt++;
        return;
    }
    if(n%2==0){
        sequence(n/2);
        cnt++;
    }
    else{
        sequence(3*n+1);
        cnt++;
    }
}
int main(){
    int n;
    cin>>n;
    sequence(n);
    cout<<cnt;
}