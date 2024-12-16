#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>temp;
    st.push(1);
    st.push(2);
    st.push(3);
    while(!st.empty()){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top()<<endl;
}