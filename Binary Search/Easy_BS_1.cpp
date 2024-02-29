// Binary Search (Easy):Question 1
// Iterative method
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target,flag = 0;
    cin>>n>>target;
    vector<int > arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    sort(arr.begin(),arr.end());
    int low = 0,high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            cout<<"Found: "<<mid;
            flag = 1;
            break;
        }
        else if(arr[mid]>target){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    if(flag == 0){
        cout<<"Not Found!!";
    }
    return 0;
}