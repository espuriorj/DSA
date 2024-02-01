#include<bits/stdc++.h>
using namespace std;
void comb_sum_I(int ind,int target,int sum,vector<int> &arr, vector<vector<int>> &ans,vector<int> & ds){
    if(ind == arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=target){
    ds.push_back(arr[ind]);
    comb_sum_I(ind,target-arr[ind],sum,arr,ans,ds);
    ds.pop_back();
    }
    comb_sum_I(ind+1,target,sum,arr,ans,ds);
    
}
int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> arr;
    vector<vector<int>> ans;
    vector<int> ds;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    comb_sum_I(0,sum,sum,arr,ans,ds);
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}