#include<iostream>
using namespace std;
print(int x){
    if(x != 0){
        cout<<x<<" ";
        print(x-1);
    }
    else return;
}
int main(){
    print(5);
}