#include<iostream>
#include<limits>
using namespace std;
int main(){
    int maxNum = INT32_MIN;
int arr[3][3]= {{5,4,6},{3,8,9},{1,2,3}};
int row=3;
int col=3;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j] > maxNum){
            maxNum = arr[i][j];

        }
    }
}
cout<<"Max no is :"<<maxNum;
}