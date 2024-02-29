#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,K,ans=0;
    cin>>n>>K;
    vector<int > arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    int low = 0,high = n-1,first = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>K){
            high = mid-1;
        }
        else if(arr[mid]==K){
            first = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }

    }
    if(arr[low] != K){
        cout<<"Number not present!!";
    }
    else{
        cout<<"First Occurence: "<<first<<endl;
    }
    ans = low;
    //last occurence
    int l = 0,h=n-1,last = -1;
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid]<K){
            l = mid+1;
        }
        else if(arr[mid]==K){
            last = mid;
            l = mid+1;
        }

        else{
            h = mid-1;
        }
    }
    cout<<"Last Occurence: "<<last<<endl;
    cout<<"Occurence count: "<<last-first+1;
}