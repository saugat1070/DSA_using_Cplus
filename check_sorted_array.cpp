#include<iostream>
#include<vector>
using namespace std;
int check_sort(vector<int>arr){
   int mid = arr[0] + (arr[arr.size()-1]-arr[0])/2 ;
   int i=0;
   while( i < mid || i < arr.size()){
    if(arr[i] > arr[mid]) return -1;
   if(arr[mid] > arr[arr.size()]) return -1;
   i++ ;
    }
    return 1;
}
int main(){
    vector<int>arr = {2,3,4,5};
    vector<int>arr2 = {2,7,5,4,5};
    cout<<check_sort(arr)<<endl;
    cout<<check_sort(arr2);
}