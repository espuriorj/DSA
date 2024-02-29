#include<bits/stdc++.h>
using namespace std;
int count_students(vector<int> arr,int page){
    
    int student = 1;
    int current_page = 0;
    for(int i = 0;i<arr.size();i++){
        if(current_page + arr[i]<=page){
            current_page+=arr[i];
        }
        else{
            student++;
            current_page = arr[i];
        }
    }
    return student;
}
int allocate_books(vector<int>& arr,int students){
    if(students>arr.size()) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid = (low+high)/2;
        int count = count_students(arr,mid);
        if(count>students){
            low = mid+1;
        }
        else    high = mid-1;  
    }
    return low;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"Number of min page book is: "<<allocate_books(arr,m);
}