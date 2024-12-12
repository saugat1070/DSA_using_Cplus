#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
      int val;
      Node* next;
      Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node a(10),b(20),c(30),d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    //printing value of d using a
    cout<<(((a.next)->next)->next)->val<<endl;
    Node temp = a;
    /* while(temp.next != NULL){
        cout<<temp.val<<" ";
        temp = *(temp.next);
    } */
   while(1){
    cout<<temp.val<<" ";
    if( temp.next == NULL) break;
    temp = *(temp.next);
   }
}