// We have to find the Upper limit of the target(X)
// Brute force is linear search and TC: O(N) worst case
// Optimal is BS and TC: O(log N)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,X,mid;
    cin>>n>>X;
    vector<int > arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    int low = 0,high = n-1;
    while(low!=high){
        mid = (low+high)/2;
        if(arr[mid]<=X){
            low = mid+1;
        }
        else{
            high = mid; 
        }
    }
    cout<<"Upper bound: "<<low;
}

