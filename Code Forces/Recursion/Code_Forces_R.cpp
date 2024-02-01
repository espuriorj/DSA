#include<bits/stdc++.h>
using namespace std;
string ans = "YES";
void palindrome(vector<int> &a,int i,int j){
    if(i>=j){
        return;
    }
    palindrome(a,i+1,j-1);
    if(a[i] != a[j]){
        ans = "NO";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    palindrome(arr,0,n-1);
    cout<<ans;
}