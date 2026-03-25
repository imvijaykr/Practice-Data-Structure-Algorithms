// #include<iostream>
// using namespace std;
// void printTranspose(int arr[][3], int r, int  c, int transposeArr[][3]){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             transposeArr[j][i] = arr[i][j];
//         }
//     }

// }
// void printArray(int arr[][3], int r, int c){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//    }



// int main(){

//     int arr[3][3];
//     int row=3;
//     int col=3;

//     int transposeArr[][3];

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>arr[i][j];
//         }
//     }
  
//   cout<<"Printing transpose";
//   printTranspose(transposeArr,row,col);
  
   
    

// return 0;
// }
#include<iostream>
using namespace std;

void Transpose(int arr[][3], int r, int c, int transposeArr[][3]){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3], int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int arr[3][3];
    int row = 3, col = 3;

    int transposeArr[3][3];   // ✅ fixed

    // input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Original Matrix:\n";
    printArray(arr, row, col);

    // function call (corrected)
    Transpose(arr, row, col, transposeArr);

    cout << "Transpose Matrix:\n";
    printArray(transposeArr, row, col);   // ✅ print result

    return 0;
}