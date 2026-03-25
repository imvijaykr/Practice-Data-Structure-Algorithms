#include <iostream>
#include<limits.h>
using namespace std;

int main() {
    int arr[]= {2,4,6,8,47,93,8,4};
    int size = 8;
    int minNum = INT32_MAX;
    for(int i =0;i<size ;i++){
        if(arr[i]<minNum){
            minNum =arr[i];
        }
    }
  cout<<"Maximum no. is : "<<minNum;

    
    return 0;
}