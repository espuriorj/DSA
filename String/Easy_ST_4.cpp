
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ans = "";
    vector<string> v; 
    for(int i = 0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    string first = v[0], last = v[n-1];
    for(int i = 0;i<min(first.size(),last.size());i++){// If first[i] == last[i] and it is sorted so all [i] is equal.
        if(first[i]!=last[i]){
           break;
        }
        else ans += first[i];
    }
    
    cout<<ans;
}