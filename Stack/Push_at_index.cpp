#include<iostream>
#include<stack>
using namespace std;
int push_at_index(stack<int> &st,int index,int value){
    stack<int>temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    int i=0  ;
    while(!temp.empty()){
        if(i == index) st.push(value);
        st.push(temp.top());
        temp.pop();
        i++;
    }
}
void print(stack<int> &st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    stack<int>st;
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    push_at_index(st,2,20);
    print(st);


}