#include <bits/stdc++.h>
using namespace std;
long long int summation(vector<int> &arr, int n, int m)
{
    if (n == m)
    {
        return arr[n];
    }
    return arr[n] + summation(arr, n - 1, m);
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        arr.push_back(elem);
    }
    cout << summation(arr, n - 1, n - m);
}