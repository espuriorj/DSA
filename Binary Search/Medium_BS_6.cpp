// 
#include<bits/stdc++.h>
using namespace std;
int least_weight(vector<int> &arr,int day){
    int weight = 0;
    int min_limit = INT_MIN;
    int max_limit = 0;
    for(int i = 0;i<arr.size()-1;i++){
        if(arr[i]<=arr[i+1]){
            min_limit = max(min_limit,arr[i+1]);
        }
    }
    for(auto it:arr){
        max_limit += it;
    }
    int low = min_limit,high = max_limit;
    while(low<=high){
        int cnt = 1,current_weight = 0;
        int mid = (low+high)/2;
        int i = 0;
        for(int i = 0;i<arr.size();i++){
            if(current_weight+arr[i]>mid){
                cnt += 1;
                current_weight = arr[i];
            }
            else{
                current_weight += arr[i];
            }
        }
        if(cnt<=day){
            weight = min(weight,mid);
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
int main(){
    int n,d;
    cin>>n>>d;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"Least Weight Capacity: "<<least_weight(arr,d);
}