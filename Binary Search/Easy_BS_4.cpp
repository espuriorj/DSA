// Search Insert Position:Using binary search 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,X,flag = 0;
    cin>>n>>X;
    vector<int > arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    int low = 0,high = n-1; 
    while(low!=high){
        int mid = (low+high)/2;
        if(arr[mid]==X){
            cout<<"Found: "<<mid;
            flag = 1;
            break;
        }
        else if(arr[mid]<X){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    if(flag == 0)
        cout<<"Index: "<<low;

}