#include <bits/stdc++.h>
using namespace std;
void even_index(vector<int> &arr, int n)
{
    if (arr.size() % 2 == 0)
    {
        if (n-2 < 0)
        {
            return;
        }
        cout << arr[n - 2] << " ";
        even_index(arr, n - 2);
    }
    else
    {
        if (n < 0)
            return;

        cout << arr[n - 1]<<" ";
        even_index(arr, n - 2);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        arr.push_back(elem);
    }
    even_index(arr, n);
}