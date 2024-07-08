// int find_count(int ind,vector<int> &a,int target){
// 	if(ind == 0){
// 		if(a[ind] == target)	return 1;
// 		else 	return 0;
// 	}
// 	if(target == 0){
// 		return 1;
// 	}
// 	int not_pick = find_count(ind-1,a,target);
// 	int pick = 0;
// 	if(target>=a[ind]){
// 		pick = find_count(ind-1,a,target-a[ind]);
// 	}
// 	return pick+not_pick;
// }

// int findWays(vector<int>& arr, int k)
// {
// 	int n = arr.size();
// 	return find_count(n-1,arr,k);
// }

// ----------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int find_count(int ind,vector<int> &a,int target,vector<vector<int>>&dp){
	if(ind == 0){
		if(a[ind] == target)	return 1;
		else 	return 0;
	}
	if(target == 0){
		return 1;
	}
	if(dp[ind][target] != -1)	return dp[ind][target];

	int not_pick = find_count(ind-1,a,target,dp);
	int pick = 0;
	if(a[ind]<= target){
		pick = find_count(ind-1,a,target-a[ind],dp);
	}
	return dp[ind][target] = pick+not_pick;
}

int findWays(vector<int>& arr, int k)
{
	int n = arr.size();
	vector<vector<int>> dp(n,vector<int>(k+1,-1));
	
	return find_count(n-1,arr,k,dp);
}

int main(){
    vector<int> arr = {1,1,4,5};
    int k = 5;
    cout<< findWays(arr,k);

}



