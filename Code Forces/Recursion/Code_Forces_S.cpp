#include<bits/stdc++.h>
using namespace std;
long double average(vector<int> &arr,int n){
    if(n==0) 
        return arr[0];
    return arr[n]+average(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<fixed<<setprecision(6)<<average(arr,n-1)/n;
}