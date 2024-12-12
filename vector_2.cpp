#include<iostream>
#include<vector>
using namespace std;
int sum_of_number(vector<int>num){
    int sum=0;
    for(int i=0; i<num.size();i++){
        sum += num[i];
    }
    return sum;

}
int main(){
    int no_of_array;
    cout<<"Enter the Number:";cin>>no_of_array;
    vector<int>number(no_of_array);
    cout<<"Enter Vector elements:"<<endl;
    int element;
    for(int i=0;i<number.size();i++){
        cin>>element;
        number.push_back(element);
    }
    cout<<sum_of_number(number);
}