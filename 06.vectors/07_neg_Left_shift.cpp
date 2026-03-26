// #include<iostream>
// #include<vector>
// void moveAllNegToLeft(int a[],int n){
//     int l=0,h=n-1;
//     while(l<h){
//         if(a[l]<0){
//             l++;
//         }
//         else if(a[h]>0){
//             h--;
//         }
//         else{
//             swap(a[l],a[h]);
//         }
//     }
// }
// using namespace std;
// int main(){
    
//     int a[]= {1,-3,-7,8,8,3,-2};
//     int n = sizeof(a)/sizeof(int);
//     moveAllNegToLeft(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
    
// return 0;

// }
#include<iostream>
using namespace std;

void moveAllNegToLeft(int a[], int n){
    int l = 0, h = n - 1;

    while(l < h){
        if(a[l] < 0){
            l++;
        }
        else if(a[h] > 0){
            h--;
        }
        else{
            swap(a[l], a[h]);
        
        }
    }
}

int main(){
    int a[] = {1, -3, -7, 8, 8, 3, -2};
    int n = sizeof(a)/sizeof(int);

    moveAllNegToLeft(a, n);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}