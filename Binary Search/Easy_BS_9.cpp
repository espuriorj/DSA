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
        else if(arr[low] == arr[mid]&& arr[mid] == arr[high]){
        //  if all element at low mid and high is same then we 
        //  are not able to find the sorted part so we inc low and dec high
            low = low+1;
            high = high-1;
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
        cout<<"True";
    }
    else    cout<<"False";
    return 0;
}
