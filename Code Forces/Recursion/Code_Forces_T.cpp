#include<bits/stdc++.h>
using namespace std;

long long int factorial(int n){
    if(n==1){
        return 1;
    }
     return n*factorial(n-1);
}

long double combination(int n,int r){
    long long int nom = factorial(n);
    long long int d1 = factorial(n-r);
    long long int d2 = factorial(r);
    
    long double ans = nom/(d1*d2);
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<combination(n,r);
}