#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>rt;
    stack<int>pt;
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    while(!st.empty()){
        cout<<st.top()<<" ";
        rt.push(st.top());
        st.pop();
    }
    while(!rt.empty()){
        pt.push(rt.top());
        rt.pop();
    }
    cout<<endl;
    while(!pt.empty()){
        st.push(pt.top());
        pt.pop();
    }
      while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    //10 20 30 40 50 
    //50 40 30 20 10

}