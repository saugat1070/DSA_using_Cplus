#include <iostream>
#include <vector>
using namespace std;
// syntax for declaring vector
// vector<data_type> vector_name;
int main()
{
    //vector<int> num(5);
    // cout<<num.size();//for size of the vector.
    // num.resize(2);//for resizing the size of the vector
    // num.pop_back(element)//it delete the element from the list.
    // num.erase(position,element)//it delete the element from the index
    // num = {1,2,3};
    // num.push_back(4);
    // num.insert(num.begin()+2,5);
    // num.erase(num.begin()+1);
    // //cout<<num.size();
    // for(int i=0;i<num.size();i++)
    // {
    //     cout<< num[i]<<endl;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     int element;
    //     cin >> element;
    //     num.push_back(element);
    // }
    // for (int i=0;i<5;i++)
    // {
    //     cout<<num[i]<<" ";
    // }
    //     return 0;
    /* 
    for occurance of number
    num ={1,2,3,2,1,3,1};
    int x=3;
    int idx=0;
    for(int i=0;i<num.size();i++)
    {
        if(num[i]==x)
        {
          idx=i;
        }
    }
    cout<<"occurence of the number is "<<idx<<endl;
*/
/*
//count the number of elements strictly greater than value x.
cout<<"Enter the numbers:"<<endl;
for(int i=0;i<num.size();i++)
{
    cin>>num[i];
}
int counter,count=0;
cout<<"Enter the counter value:";
cin>>counter;
for(int i=0;i<num.size();i++)
{
    if(num[i]>counter)
    {
        count++;
    }
}
cout<<"The number of integer greater than counter is "<<count<<endl;
*/
//check if the given array is sorted or not
// num={1,2,3,4,5};
// bool sorted=true;
// for(int i=1;i<num.size();i++)
// {
//     if(num[i]<=num[i-1])
//     {
//         sorted=false;
//     }
// }
// cout<<sorted<<endl;
    //find the difference betweene the sum of elements at even indices
    //to the sum of elements at odd indices.
 /*    num={2,3,4,5,6,7,8};
    int sum1=0,sum2=0;
    for(int i=0;i<num.size();i++)
    {
        if(i%2==0)
        {
            sum1=sum1+num[i];
        }
        else{
            sum2=sum2+num[i];
        }
    }
    int difference = sum1 - sum2;
    cout<<"difference is "<<difference<<endl;
     return 0; */
     vector<int> num ={2,3,5};
     
}