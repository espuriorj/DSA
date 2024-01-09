// #include<bits/stdc++.h>
// using namespace std;

// int cnt = 0;
// void func(){
//     if(cnt == 6)  return;
//     cout<<"Count: "<<cnt<<endl;
//     cnt++;
//     func();
// }
// int main(){
//     func();
// }


// #include <iostream>

// const long long MOD = 1000000007;  // 10^9 + 7

// long long restrictedValue(long long value) {
//     return (value % MOD + MOD) % MOD;
// }

// int main() {
//     long long var = 123456789123456789;  // Replace with your actual value

//     // Restricting var to 10^9 + 7
//     long long restrictedVar = restrictedValue(var);

//     std::cout << "Original value: " << var << std::endl;
//     std::cout << "Restricted value: " << restrictedVar << std::endl;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
 
void dec_to_bin(int N){
    
    if(N/2 == 0){
        cout<<N%2;
        return;
    }
    
    dec_to_bin(N/2);
    cout<<N%2;
}
 
int main(){
    
    int t;
    cin>>t;
    
    for(int i = 0;i<t;i++){
        int N;
        cin>>N;
        dec_to_bin(N);
        cout<<endl;
    }
    
    return 0;
}