// This is recursion to Memoization
// with three step/
// 1. initialize a dp array of size n+1 with value -1:  dp[n+1]
// 2. check if sub problem is solved already if(dp[n]!= -1)
// 3. store each computation in dp array dp[n] = f(n-1) + f(n-2)

// TC : O(n)
// SC : O(n) + O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int dyna_fib(int n, vector<int> &dp)
// {
//     if (n <= 1)
//         return n;

//     if (dp[n] != -1)
//         return dp[n];
//     return dp[n] = dyna_fib(n - 1,dp) + dyna_fib(n - 2,dp);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> dp(n+1, -1);
//     cout << dyna_fib(n, dp);
// }


// This is tabulation method(bottom up, bcoz base case then calculation till required)
// Steps:
//  dp[n+1]
//  dp[0] & dp[1]
//  for loop and store dp[n] = dp[n-1]+dp[n-2]

// TC : O(n)
// SC : O(n)

// #include<bits/stdc++.h>
// using namespace std;
// void dp_fibb(vector<int> &dp,int n){
//     dp[0] = 0;
//     dp[1] = 1;
//     for(int i = 2;i<=n;i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> dp(n+1,-1);
//     dp_fibb(dp,n);
//     cout<<dp[n];
// }


// This is most optimized one 
// TC : O(n)
// SC : O(1)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int prev2 = 0,prev = 1, current = 0;
//     for(int i = 2;i<=n;i++){
//         current = prev + prev2;
//         prev2 = prev;
//         prev = current;
//     }
//     cout<<prev;
// }