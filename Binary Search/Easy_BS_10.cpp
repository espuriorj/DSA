// // Optimal 1(Minimum element): Finding sorted part and then taking first element as min and discarding that part and then searching in the unsorted part.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,ans = INT_MAX;
//     cin>>n;
//     vector<int > arr;
//     for(int i = 0;i<n;i++){
//         int elem;
//         cin>>elem;
//         arr.push_back(elem);
//     }
//     int low = 0,high = n-1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]<=arr[high]){
//             ans = min(ans,arr[mid]);
//             high = mid-1;
//         }
//         else{
//             ans = min(ans,arr[low]);
//             low = mid+1;
//         }
//     }
//     cout<<"Minimum element: "<<ans;
// }

// We can further sort this method as when the entire array is sorted then no need to use BS, first elem is the min elem.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans = INT_MAX;
    cin>>n;
    vector<int > arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[high]){
            //entire array is sorted
            ans = arr[low];
            break;
        }
        else if(arr[mid]<=arr[high]){
            ans = min(ans,arr[mid]);
            high = mid-1;
        }
        else{
            ans = min(ans,arr[low]);
            low = mid+1;
        }
    }
    cout<<"Minimum element: "<<ans;
}