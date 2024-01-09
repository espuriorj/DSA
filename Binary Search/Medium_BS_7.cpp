// Kth Missing number in the given array
// as number of missing numer at i is arr[i] - (i+1) and on the basis of k and missing number we can apply BS to get at what near index we can find the missing number
// missing number will be k+high+1
#include<bits/stdc++.h>
using namespace std;
int missing_num(vector<int> &arr,int n,int k){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = arr[mid]-(mid+1);
        if(missing<k){
            low = mid +1;
        }
        else{
            high = mid - 1;
        }
    }
    return k+high +1;
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
    cout<<"Missing number: "<<missing_num(arr,n,k);
}