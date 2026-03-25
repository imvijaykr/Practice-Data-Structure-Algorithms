#include<iostream>
using namespace std;
bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i== 0){
         return false;
        }
    }
    return true;
   
}

int main(){
    int n;
    cin>>n;
    bool isPrime=checkPrime(n);
    if(isPrime //or here we can write isPrime==true
        ){
            cout<<"Prime";
        }
        else{
            cout<<"This is not a prime";
            return 0; 
        }
    
}