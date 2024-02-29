#include<bits/stdc++.h>
using namespace std;
 
void dec_to_bin(int N){
    
    if(N/2 == 0){
        cout<<N%2;
        return;
    }
    
    dec_to_bin(N/2);
    cout<<N%2;
}
 
int main(){
    
    int t;
    cin>>t;
    
    for(int i = 0;i<t;i++){
        int N;
        cin>>N;
        dec_to_bin(N);
        cout<<endl;
    }
    
    return 0;
}