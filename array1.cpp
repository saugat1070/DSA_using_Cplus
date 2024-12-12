#include<iostream>
using namespace std;
int main()
{/*
    int array[]={1,2,6};//4*3=12
    cout<<sizeof(int)<<endl;
    cout<<sizeof(array)<<endl;
    cout<<"Lenth of array is "<<sizeof(array)/sizeof(int)<<endl;
    for(int ele:array)//for each loop
    cout<<ele<<endl;*/
    // char array[10];
    // for(char &alpha:array)
    // cin>>alpha;
    // Calculate the sum of all the elements in the given array
    int n;
    cin>>n;
    int array[n];
  for(int i=0;i<n;i++)
  cin>>array[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    cout<<"sum of array element is "<<sum;

    return 0;
}