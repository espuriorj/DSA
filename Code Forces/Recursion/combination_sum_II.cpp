#include<bits/stdc++.h>
using namespace std;
void comb_sum_II(int ind,int target,int sum,vector<int>&arr,vector<vector<int>> &ans, vector<int> &ds){
    if(ind==arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }
    ds.push_back([ind]);
    comb_sum_II(ind+1,target-arr[ind],sum,arr,ans,ds);
    ds.pop_back(arr[ind]);
    comb_sum_II(ind+1,target-arr[ind],sum)
}