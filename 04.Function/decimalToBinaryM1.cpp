#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int binaryno = 0;
    int i = 0;

    while(n > 0){
        int bit = n % 2;
        binaryno = bit * (int)pow(10, i) + binaryno;
        n = n / 2;
        i++;
    }

    return binaryno;
}

int main(){
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    cout << decimalToBinary(n);

    return 0;
}