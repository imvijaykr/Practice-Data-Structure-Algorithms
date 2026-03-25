#include<iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    for(int i=n;i>=1;i--){
        result =result*i;
    }
    return result;
}
int main(){
    int n;
    cout<<"Enetr value of n : ";
    cin>>n;
    int ans=factorial(n);
    cout<<"Factorial of "<<n<<" is  "<<ans;
    return 0;
}