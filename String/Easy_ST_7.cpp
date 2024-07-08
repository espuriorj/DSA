// // Checking Strings are ANAGRAM of each other or not.
// // BRUTE Force
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     int flag = 0;
//     if (s1.length() != s2.length())
//     {
//         cout << "False";
//         flag = 1;
//     }
//     else
//     {
//         sort(s1.begin(), s1.end());
//         sort(s2.begin(), s2.end());
//         for (int i = 0; i < s1.length(); i++)
//         {
//             if (s1[i] != s2[i])
//             {
//                 cout << "flase" << endl;
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if (flag == 0)
//     {
//         cout << "True";
//     }
//     return 0;
// }

// // Better Approach
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     int flag = 0;
//     map<char, int> mp1;
//     if (s1.length() != s2.length())
//     {
//         cout << "False" << endl;
//     }
//     else
//     {
//         for (int i = 0; i < s1.length(); i++)
//         {
//             mp1[s1[i]]++;
//         }
//         for (int i = 0; i < s2.length(); i++)
//         {
//             if (mp1.find(s2[i]) == mp1.end())
//             {
//                 cout << "False" << endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//             cout << "True" << endl;
//     }
//     return 0;
// }

// Optimal Approach
// TC: O(n) n-> length of string
// SC: O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     int flag = 0;
//     int freq[26] = {0};
//     if (s1.length() != s2.length())
//     {
//         cout << "False" << endl;
//         flag = 1;
//     }
//     else
//     {
//         for (int i = 0; i < s1.length(); i++)
//         {
//             freq[s1[i] - 'A']++;
//         }
//         for (int i = 0; i < s2.length(); i++)
//         {
//             freq[s2[i] - 'A']--;
//         }
//         for (int j = 0; j < 26; j++)
//         {
//             if (freq[j] != 0)
//             {
//                 cout << "False" << endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << "True" << endl;
//         }
//     }

//     return 0;
// }
