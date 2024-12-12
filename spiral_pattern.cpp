#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = n - 1;
    char mat[n][n] = {{'a', 'b', 'c','d','1'},
                      {'e', 'f', 'g','h','2'},
                      {'i', 'j', 'k','l','3'},
                      {'m', 'n', 'o','k','4'},
                      {'z','y','v','w','u'}};
                      
    for(int i=scol; i<=ecol;i++){
        cout<<mat[srow][i]<<" ";
    }
    for(int j=srow+1;j<=erow;j++)
    {
        cout<<mat[j][ecol]<<" ";
    }
    for(int i=ecol-1; i>=scol;i--){
        cout<<mat[erow][i]<<" ";
    }
    for(int j=erow-1;j>srow;j--){
        cout<<mat[j][scol]<<" ";
    }
    for(int i=scol+1; i<ecol; i++){
        cout<<mat[srow+1][i]<<" ";
    }
    for(int i=srow+2;i<erow;i++){
        cout<<mat[i][ecol-1]<<" ";
    }
    for(int i=ecol-2;i>scol;i--){
        cout<<mat[erow-1][i]<<" ";
    }
    
    return 0;
}animal hi i am saugat giri.
animal hi i am aayushma