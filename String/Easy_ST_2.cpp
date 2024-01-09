// // // // Reverse Words in a string
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     string num = "52";
// // //     cout
// // //     // int ans;
// // //     // int nu = stoi(num);
// // //     // if (nu % 2 != 0)
// // //     // {
// // //     //     ans = nu;
// // //     // }
// // //     // else
// // //     // {
// // //     //     int temp = nu;
// // //     //     while (temp != 0)
// // //     //     {
// // //     //         int n = temp % 10;
// // //     //         if (n % 2 != 0)
// // //     //         {
// // //     //             ans = max(ans, n);
// // //     //         }
// // //     //         temp = temp / 10;
// // //     //     }
// // //     // }
// // //     // string an = to_string(ans);
// // //     // cout<< an;
// // // }





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
    for(int i = 0;i<min(first.size(),last.size());i++){
        if(first[i]!=last[i]){
           break;
        }
        else ans += first[i];
    }
    cout<<ans;
}