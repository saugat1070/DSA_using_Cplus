#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    for(int i=1;i<=st.size();i++){
        cout<<st.top()<<" ";
        st.pop();
    }
}