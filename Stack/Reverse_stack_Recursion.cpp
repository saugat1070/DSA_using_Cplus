#include<iostream>
#include<stack>
using namespace std;
void Reverse_Recursion(stack<int>&st){
    if(st.empty()) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    Reverse_Recursion(st); //calling same function 
    st.push(x);
}
int main(){
    stack<int>st;
    stack<int>rt;
    stack<int>pt;
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    Reverse_Recursion(st);


}