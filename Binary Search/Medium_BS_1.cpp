// Finding square root of +ve integer 
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
// Brute: We can linearly travel 1 to N and find n*n<=N we will move ahead till reach max n satisfying this condition
// Better: Using built-in sqrt() function
// Optimal: Using BS on answer space [1,n] and check mid
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = -1;
    int low = 1,high = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid*mid<=n){
            ans = max(ans,mid);
            low = mid+1;
        }  
        else    high = mid-1;
    }
    cout<<"Square root of "<<n<<" is: "<<ans;
}