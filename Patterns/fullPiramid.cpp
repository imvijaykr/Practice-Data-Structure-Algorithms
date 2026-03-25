#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
       
    }
}
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enetr no. of rows :";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){ // rows
//        for(int j = 1;j<=n-i;j++){ //space
//             cout<<"  ";
//         }
//         for(int j = 1;j<=i;j++){ // stars
//             cout<<"*   ";
//         }
//         cout<<endl;
//     }
// }   