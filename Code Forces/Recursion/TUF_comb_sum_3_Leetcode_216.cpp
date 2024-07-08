// Pick/Non-Pick Subsequence printing
// Recursive method 
#include<bits/stdc++.h>
using namespace std;
void subseq(int p,vector<int>&vec,int k,int tar,vector<vector<int>> &ans){
    if(k == 0){
        int sum = 0;
        for(int i = 0;i<vec.size();i++){
            sum += vec[i];
        }
        if(sum == tar){
            ans.push_back(vec);
        }
        
        return;
    }
    vec.push_back(p);
    subseq(p+1,vec,k-1,tar,ans);
    vec.pop_back();
    subseq(p+1,vec,k-1,tar,ans);
}
int main(){
    int target,k;
    cin>>target>>k;
    vector<vector<int>> ans;
    vector<int> vec;
    
    subseq(1,vec,k,target,ans);
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}