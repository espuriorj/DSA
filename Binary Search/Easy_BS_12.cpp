// Prob: Each elements is present twice except one element, fint that one elem.
/*Brute: Linear search -> for i == 0: arr[i] == arr[i+1] || for i == n-1: arr[i-1] == arr[i]
         in between elements: arr[i] != arr[i+1] and arr[i] != arr[i-1] if true then arr[i] is ans.*/
//Better: XOR -> Take XOR of the array , XOR of all the pair element will be cancel out and the solo elem will remain.
// ----------------
// Optimal: Using BS->we have to trim half search space, on left side of the single element every pair element index <even,odd> and on right side <odd,even>
//          we will chk edge cases and then check if mid is odd or even and also mid and mid-1 or mid+1 is same as mid or not & accordingly we trim one side. 

#include<bits/stdc++.h>
using namespace std;
int single_elem(vector<int>& arr){
    int n = arr.size();
    int low = 1,high = n-2;
    if(n == 1)  return arr[0];
    if(arr[0]!= arr[1])    return arr[0];
    if(arr[n-1]!= arr[n-2])    return arr[n-1];
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]!= arr[mid+1]&& arr[mid]!=arr[mid-1])   return arr[mid];
        if(mid%2 == 1 && arr[mid]== arr[mid-1] || mid%2 == 0 && arr[mid] == arr[mid+1]){
                low = mid+1;
            }
        else    high = mid-1;
        
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"Single element: "<<single_elem(arr);
}