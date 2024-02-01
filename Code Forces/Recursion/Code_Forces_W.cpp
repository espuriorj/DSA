#include<bits/stdc++.h>
using namespace std;
void reach_value(vector<int> &arr,int n){
    if(n<0){
        return;
    }
    reach_value(arr,n-1);
    else if(arr[n]==1||arr[n]%10 == 0 || arr[n]%20 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    reach_value(arr,n-1);
}

