#include<bits/stdc++.h>
using namespace std;
void subseq_sum_k(vector<int> &vec,vector<int> &arr,int ind,int sum,int k,int n){
    if(ind>=n){
        if(sum==k){
            for(auto it:vec){
                cout<<it<<" ";
            }
            cout<<endl;
            return;
        }
        return;
    }
    vec.push_back(arr[ind]);
    sum += arr[ind];
    subseq_sum_k(vec,arr,ind+1,sum,k,n);
    sum -= arr[ind];
    vec.pop_back();
    subseq_sum_k(vec,arr,ind+1,sum,k,n);
}
int main(){
    int n,k,sum = 0;
    cin>>n>>k;
    vector<int> vec;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    subseq_sum_k(vec,arr,0,sum,k,n);
}