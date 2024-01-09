#include<bits/stdc++.h>
using namespace std;
class Node{// struct can be used but class give OOPs fascilities so better to use class
            // but in class all member function and data are private by default and 
            //can't be accessed outside of the class without explicit access specifier 
            //but in struct these are by default public.
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node *next1){//parameterized constructor
        data = data1;
        next = next1;
    }
    Node():data(5),next(nullptr){}// default constructor
};
// function to convert array to linked list
Node * arr_to_LL(vector<int>&arr){
    Node * head = new Node(arr[0],nullptr);
    Node *mover = head;
    for(int i = 1;i<arr.size();i++){
        Node * temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int main(){
    // Node mynode;
    // cout<<mynode.data<<" ";
    Node *y = new Node(2,nullptr);// this will direct pointer to the instance
    // *****************************************************************************
    //example to convert array to linked list
    vector<int> arr = {5,4,3,2,1};
    Node * head = arr_to_LL(arr);
    Node *bgn = head;
    while(bgn){
        cout<<bgn->data<<" ";
        bgn = bgn->next;
    }

}