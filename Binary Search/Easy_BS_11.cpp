#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans = -1;
    cin>>n;
    vector<int > arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[high]){
            //entire array is sorted
            ans = low;
        }
        else if(arr[mid]<=arr[high]){
            ans = mid;
            high = mid-1;
        }
        else{
            ans =low;
            low = mid+1;
        }
    }
    cout<<"Rotation: "<<ans;
}