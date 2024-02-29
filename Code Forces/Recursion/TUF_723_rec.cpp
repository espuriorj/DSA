// Pick/Non-Pick Subsequence printing
// Recursive method 
#include<bits/stdc++.h>
using namespace std;
void subseq(int ind,vector<int>&vec,int n,vector<int> &arr){
    if(ind >=n){
        for(auto it:vec){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    vec.push_back(arr[ind]);
    subseq(ind+1,vec,n,arr);
    vec.pop_back();
    subseq(ind+1,vec,n,arr);
}
int main(){
    int p;
    cin>>p;
    vector<int> arr;
    vector<int> vec;
    for(int i = 0;i<p;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    subseq(0,vec,p,arr);
}