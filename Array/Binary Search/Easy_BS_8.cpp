// Searching element in a rotated sorted array: We will use BS in sorted part 
// as one part either left or right of mid will always be sorted.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,flag = 0,ans;
    cin>>n>>k;
    vector<int> arr;
    for(int i =0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            ans = mid;
            flag = 1;
            break;
        }
        else if(arr[low]<=arr[mid]){//left part is sorted
            if(arr[low]<=k && k<=arr[mid]){//target is in between left part
                high = mid-1;
            }
            else    low = mid+1;
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    if(flag == 1 ){
        cout<<"Found at: "<<ans;
    }
    else    cout<<"Not Found!";
    return 0;
}
//  4 5 6 7 0 1 2 3 