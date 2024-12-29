#include<iostream>
#include<limits.h>
using namespace std;
int reverse(int x) { long reversed = 0; // Use a long to handle potential overflow 
while (x != 0) { 
    int pop = x % 10;
     x /= 10; 
     reversed = reversed * 10 + pop; // Check for overflow and underflow 
     if (reversed > INT_MAX || reversed < INT_MIN) { return 0; }
      } return static_cast<int>(reversed); }
 int main(){
     cout<<reverse(-2147483412);
     //cout<<sizeof(long);
 }