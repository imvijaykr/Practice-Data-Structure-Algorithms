#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // upper
    for(int i = 0; i < n; i++) {
        cout << "* ";

        for(int j = 0; j < i+1; j++){

        cout << j+1 << " ";
        }
        for(int j = i-1; j >= 1; j--) 
        cout << j << " ";

        if(i != 0) cout << "*";
        cout << endl;
    }

    // lower
    for(int i = n-2; i >= 0; i--) {
        cout << "* ";

        for(int j = 1; j <= i; j++) cout << j << " ";
        for(int j = i-1; j >= 1; j--) cout << j << " ";

        if(i != 0) cout << "*";
        cout << endl;
    }
}