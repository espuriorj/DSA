// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> dp(n+1,-1);
//     dp[0] = 1;
//     dp[1] = 1;
//     for(int i = 2;i<=n;i++){
//         dp[i] = dp[i-1]+dp[i-2];
//     }
//     cout<<dp[n];
//     return 0;
// }


// TC: O(n)
// SC : O(1)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int prev = 1,prev2 = 1,current = 0;
//     for(int i = 2;i<=n;i++){
//         current = prev + prev2;
//         prev2 = prev;
//         prev = current;
//     }
//     cout<<prev;
// }