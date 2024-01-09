#include<bits/stdc++.h>
using namespace std;
void print_func(int N){
    if(N==1){
        cout<<"I love Recursion"<<endl;
        return;
    }
    cout<<"I love Recursion"<<endl;
    print_func(N-1);
}
int main(){
    int N;
    cin>>N;
    print_func(N);
    return 0;
}