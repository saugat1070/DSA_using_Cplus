#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num(10);
    //find the total number of pairs in the array whose sum is equal to the
    //given value of x.
    /*
    vector<int> num(10);
    num= {2,3,4,5,6,1,3};
    int target=5,sum=0,count=0;
    for(int i=0;i<num.size();i++)
    {
        if(num[i]<target)
        {
            for(int j=0;j<i+1;j++)
            {
                sum=num[i]+num[j];
                if(target==sum)
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
    */
   //Count the number of triplets whose sum is equal to the value of x.
     num= {2,3,4,5,6,1,3};
     int target=6;
     int count=5;
    
    return 0;
}