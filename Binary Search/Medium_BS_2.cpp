// Optimal have to find Nth root of M. Using BS we can trim 
// down the search space by checking (mid)^N == M or not 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,ans=-1;
    cin>>n>>m;
    int low = 1,high = m;
    while(low<=high){
        int mid = (low+high)/2;
         int k=1; //= pow(mid,n);
        for(int i = 0;i<n;i++){
            k = k*mid;
        }
        if(k==m){
            ans = mid;
            break;
        }
        else if(k<m){
            low = mid+1;
        }
        else    high = mid-1;

    }
    cout<<"X: "<<ans;

}