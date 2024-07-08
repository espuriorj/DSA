#include<bits/stdc++.h>;
using namespace std;
void print_N(int N){
    if(N==1){
        cout<<N;
        return;
    }
    cout<<N<<" ";
    print_N(N-1);
}
int main(){
    int N;
    cin>>N;
    print_N(N);
    return 0;
}