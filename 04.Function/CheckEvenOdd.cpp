#include<iostream>
using namespace std;
bool checkNo(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int val;
    cout<<"Enter the value to check :";
    cin>>val;
    bool isEven =checkNo(val);
    if(isEven){
        cout<<"Given No. is Even.";
    }
    else{
        cout<<"Given no. is odd.";
    }
    return 0;
}