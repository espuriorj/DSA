// First and Last Occurence: Set the condition carefully||For First Occr: Narrow down the search space toward left and vice versa.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,K;
    cin>>n>>K;
    vector<int > arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    int l = 0,h = n-1;
    while(l!= h){
        int mid = (l+h)/2;
        if(arr[mid]>=K){
            h = mid;
        }
        else{
            l = mid+1;
        }
    }
    cout<<"First Occurence: "<<l<<"\n";
    int low = 0,high = n-1;
    while(low!=high){
        int mid = (low+high)/2;
        if(arr[mid]<=K){
            low = mid;
        }
        else{
            high = mid-1;
        }
    }
    cout<<"Last Occurence: "<<high;
}