#include<bits/stdc++.h>
using namespace std;
void print_digits(int N){
    if(N/10 == 0){
        cout<<N%10<<" ";
        return;
    }
    print_digits(N/10);
    cout<<N%10<<" ";
}
int main(){
    int n,N;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>N;
        print_digits(N);
        cout<<endl;
    }
    return 0;
}