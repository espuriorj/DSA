#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void count_vowels(string s,int n){
    if(n == 0)  return;
    count_vowels(s,n-1);
    char c = s[n];
    if(c =='a'||c =='e'||c =='i'||c =='o'||c =='u'||c =='A'||c =='E'||c =='I'||c =='O'||c =='U'){
        cnt ++;
    }
}
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    count_vowels(s,n-1);
    cout<<cnt;
}