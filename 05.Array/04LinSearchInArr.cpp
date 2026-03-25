#include <iostream>
using namespace std;
bool findKey(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
            break;
        }
        else{
            return false;
        }
    }
}
int main() {
    int arr[] = { 1,2,3,4,5};
    int size =5;
//     int key =5;
//  bool flag = 0;
//  for(int i = 0; i<size;i++){
//     if(arr[i]== key){
//         flag =1;
//         break;
//     }
//  }

// if(flag){
//     cout<<"Key element is Present";
// }
// else{
//     cout<<"NOT Present";
// }
    int key = 4;
    bool result = findKey(arr,size,key);
    if(result){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    return 0;
}