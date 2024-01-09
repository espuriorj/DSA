// Optimal: As we observe, the answer lies in [1,max(arr[])] we will do BS
// and trim left part as sum > limit else right part, we will store mid 
// if sum<limit and update if next mid is smaaler than current

#include<bits/stdc++.h>
using namespace std;
int min_divisor(vector<int>& arr,int limit){
    int n = arr.size();
    int ans = INT_MAX;
    int maxi=INT_MIN;
    for(int i =0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            maxi = max(maxi,arr[i+1]);
        }
    }
    int low = 1,high = maxi;
    while(low<=high){
        int mid = (low+high)/2;
        int sum = 0;
        for(auto it:arr){
            sum += ceil(double(it)/double(mid));//double because otherwise it will take 
                                                // integer division and 2.5 becomes 2 so ceil of 2 is 2
           
        }
        
        if(sum<=limit){
            ans = min(ans,mid);
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int n,lim;
    cin>>n>>lim;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"Smallest Divisor: "<<min_divisor(arr,lim);
}