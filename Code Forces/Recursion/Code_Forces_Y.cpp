#include<bits/stdc++.h>
using namespace std;
int ways(int s,int e){
    if(s>e){
        return 0;
    }
    if(s==e){
        return 1;
    }
    return ways(s+1,e)+ways(s+2,e)+ways(s+3,e);
}
int main(){
    int s,e;
    cin>>s>>e;
    cout<<ways(s,e);
}