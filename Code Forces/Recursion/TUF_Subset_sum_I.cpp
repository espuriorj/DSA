#include<bits/stdc++.h>
using namespace std;
void subset_sum(int ind,int sum,vector<int> &arr,vector<int> &ds){
    if(ind>=arr.size()){
        ds.push_back(sum);
        return;
    }

    sum+=arr[ind];
    subset_sum(ind+1,sum,arr,ds);
    sum -= arr[ind];
    subset_sum(ind+1,sum,arr,ds);

}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> ds;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    subset_sum(0,0,arr,ds);
    sort(ds.begin(),ds.end());
    for(auto it:ds){
        cout<<it<<endl;
    }
}