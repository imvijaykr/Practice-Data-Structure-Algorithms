#include<iostream>
using namespace std;
int main(){

    // Declaration 
    int arr[2][2];

    // intialise
    int brr[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";      
          }
          cout<<endl;
    }
    cout<<"Printing column wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[j][i]<<" ";      
          }
          cout<<endl;
    }
// Or if we want we can take inpur as column-wsie and and print as same.
}