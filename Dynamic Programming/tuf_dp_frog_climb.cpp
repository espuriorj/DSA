#include <bits/stdc++.h> 
using namespace std;
int solve_frogjump(int ind,int energy,vector<int> &heights,int ans){
    cout<<"in solve_frogjump"<<endl;
    if(ind == heights.size()-1){
        ans = min(energy,ans);
        return ans;
    }
    if(heights.size() == 2){
        return abs(heights[1] - heights[0]);
    }
    return solve_frogjump(ind+1,abs(heights[ind+1]-heights[ind]),heights,ans) + solve_frogjump(ind+2,abs(heights[ind+2]-heights[ind]),heights,ans);
}
int frogJump(int n, vector<int> &heights)
{
    cout<<"in frogjump"<<endl;
    return solve_frogjump(0, heights[0],heights,INT_MAX);
    cout<<"after frogjump"<<endl;

}
int main(){
    int n;
    cin>>n;
    vector<int> heights;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        heights.push_back(elem);
    }
    cout<<"Ans: "<<frogJump(n,heights);
}