#include<bits/stdc++.h>
using namespace std;
int i = 0;
void print_N(int N){
    if(N==0){
        return;
    }
    cout<<i+1<<endl;
    i++;
    print_N(N-1);
}
int main(){
    int N;
    cin>>N;
    print_N(N);
    return 0;
}