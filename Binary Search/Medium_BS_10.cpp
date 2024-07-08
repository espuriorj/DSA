#include<bits/stdc++.h>
using namespace std;
int check_sum_is_possible(vector<int> &arr,int mid){
    int num_partition = 1;
    int current_sum = 0;
    for(int i = 0;i<arr.size();i++){
        if(current_sum + arr[i]<=mid){
            current_sum+=arr[i];
        }
        else{
            num_partition++;
            current_sum = arr[i];
        }
    }
    return num_partition;
}
int max_minimized_sum(vector<int> &arr,int k){
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid = (low+high)/2;
        int check = check_sum_is_possible(arr,mid);
        if(check>k){
            low = mid+1; 
        }
        else{
            high = mid-1;
        }
    }
    return low;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"Max minimized sum: "<<max_minimized_sum(arr,k);
}