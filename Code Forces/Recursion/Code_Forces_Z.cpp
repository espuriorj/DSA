#include<bits/stdc++.h>
using namespace std;
void left_max(vector<int> &arr,int maxi,int n,int i){
    if(i>n) return;

    maxi = max(arr[i],maxi);
    cout<<maxi<<" ";
    left_max(arr,maxi,n,i+1);
} 
int main()
{
    int n,i=0,maxi = INT_MIN;
    cin>>n;
    vector<int> arr;
    for(int i =0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    left_max(arr,maxi,n-1,0);
}