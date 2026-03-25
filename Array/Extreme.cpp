// #include <iostream>
// #include<limits.h>
// using namespace std;

// int main() {
//     int arr[]= {2,1,6,8,47,93,8,4};
//     int size = 8;
//     int start=0;
//     int end=size-1;
    
// while(true){
// if(start>end){
//     break;
//     cout<<arr[start]<<" ";
//     cout<<arr[end]<<" ";
//     start++;
//     end--;
// }
// }  
  
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,1,6,8,47,93,8,4};
    int size = 8;

    int start = 0;
    int end = size - 1;

    while (start <= end) {
        cout << arr[start] << " ";
        
        if (start != end) { // avoid duplicate in middle
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }

    return 0;
} 