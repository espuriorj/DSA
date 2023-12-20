// For finding floor and ceil of X we can use binary  
// search and carefully adjust the low and high with mid;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,X;
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
        if(arr[mid]<=X){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    
    int l = 0,h = n-1;
    while(l!=h){
        int med = (l+h)/2;
        if(arr[med]<=X){
            l = med;
        }
        else    
            h = med-1;
    }
    cout<<"Ceil: "<<arr[high]<<"\n";
    cout<<"Floor: "<<arr[l];
}