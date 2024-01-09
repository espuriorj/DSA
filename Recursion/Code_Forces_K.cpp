#include<bits/stdc++.h>
using namespace std;
int maxi = INT_MIN;
void max_element(vector<int> & arr,int n){
    if(n==0)    return;
    max_element(arr,n-1);
    maxi = max(arr[n],maxi);
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
    max_element(arr,n-1);
    cout<<maxi;
}