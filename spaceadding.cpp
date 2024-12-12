#include<iostream>
#include<string>
#include<vector>
using namespace std;
string addSpace(string str, vector<int> spaces){
    for(int i=0;i < spaces.size();i++){
        if(spaces[i] < str.size()){
            str.insert(spaces[i] + i," ");
        }
    }
    return str;

}
int main(){
    string str ="IamSaugatGiri";
    vector<int> spaces = {1,3,9};
    // for(int i=0;i<spaces.size();i++){
    // cout<<spaces[i]<<" ";
    // }
    cout<<addSpace(str,spaces);

}
