#include <bits/stdc++.h>
using namespace std;
int dyna_fib(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];
    return dp[n] = dyna_fib(n - 1,dp) + dyna_fib(n - 2,dp);
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << dyna_fib(n, dp);
}