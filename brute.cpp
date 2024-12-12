#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,7,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<endl;
                found = true;
                
            }
        }
        
    }
    if(found){
        cout<<"found!";
    }
    }
