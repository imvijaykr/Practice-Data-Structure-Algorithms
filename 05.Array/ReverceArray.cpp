#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,1,6,8,47,93,8,};
    int size = 7;
    int start=0;
    int end = size -1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--; 
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}