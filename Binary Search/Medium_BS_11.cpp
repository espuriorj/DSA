#include<bits/stdc++.h>
using namespace std;
int check_k(vector<int> &arr,int mid){
    int partition = 1;
    int current_area = 0;
    for(int i = 0;i<arr.size();i++){
        if(current_area + arr[i]<=mid){
            current_area += arr[i];
        }
        else
        {
            current_area = arr[i];
            partition ++;
        }
    }
    return partition;
}
int min_time_to_paint(vector<int>& arr,int k){
    int low = *min_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid = (low+high)/2;
        int check = check_k(arr,mid);
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
    for(int i =0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"Min time to paint: "<<min_time_to_paint(arr,k);
}