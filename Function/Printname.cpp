#include<iostream>
using namespace std;
void printName(){
    
    cout<<"Enter no. times to print :";
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Babber"<<endl;
    }
}
int main(){
    printName();
    return 0;
}