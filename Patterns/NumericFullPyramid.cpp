#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //number
        for(int col=0;col<row+1;col++){
          cout<<row+col+1;
        }
        //reverse counting 
        int count = 2*row;
        for(int col=0;col<row;col++){
            cout<<count;
            count--;
        }
        cout<<endl;
    }
    
    // for(int row=0;row<n;row++){
    //     int start=row+1;
    //     for(int col=0;col<row+1;col++){
    //         cout<<start<<" ";
    //         start++;

    //     }
    //     cout<<endl;
    //}
}