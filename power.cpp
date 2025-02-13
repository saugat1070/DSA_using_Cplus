#include<iostream>
#include<vector>
using namespace std;

double pow(double x, long n){
    if(n == 0){ return 1.00;}
    if (n > 0){
        return x * pow(x,n-1);
    }
    return 1.0 / pow(x,-n);
    
    
}
int main(){
    cout.precision(5);
    cout << fixed << pow(8.88023, 3)<< endl;
    cout<<endl;
}