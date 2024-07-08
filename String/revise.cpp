// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int low = 0, high = n-1;
//     int ans = -1;
//     while(low<= high){
//         int mid = (low+high)/2;
//         if(arr[mid]>x){
//             ans = mid;
//             high =  mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     return ans;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
   string s = "abcd";
   string k = s.substr(0,1);
   cout<<k<<" "<<s.length();

   
}

// #include <bits/stdc++.h>
// using namespace std;
// void searchRange(vector<int> &nums, int target,vector<int> &ans)
// {
//     int n = nums.size();
    
//     int low = 0, high = n - 1, start = -1, end = -1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (nums[mid] == target)
//         {
//             cout<<"ans"<<endl;
//             start = mid;
//             high = mid - 1;
//         }
//         else if (nums[mid] > target)
//         {
//             high = mid - 1;
//         }
//         else
//             low = mid + 1;
//     }
//     if (start == -1)
//     {
//         cout<<"1"<<endl;
//         ans.push_back(start);
//         ans.push_back(-1);
//         return ;
//     }
//     int l = 0, h = n - 1;
//     while (l <= h)
//     {
//         // cout<<"ans2"<<endl;
//         int md = (l + h) / 2;
//         if (nums[md] == target)
//         {
//             end = md;
//             l = md + 1;
//         }
//         else if (nums[md] > target)
//         {
//             high = md - 1;
//         }
//         else
//         {
//             low = md + 1;
//         }
//     }
//     ans.push_back(start);
//     ans.push_back(end);
//     return ;
// }
// int main(){
//     vector<int> nums = {5,7,7,8,8,10};
//     vector<int> a;
//     searchRange(nums,8,a);
//     for(int i = 0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }

// }