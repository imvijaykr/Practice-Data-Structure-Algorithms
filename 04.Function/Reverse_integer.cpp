// LeetCode proble 07
#include<iostream>
using namespace std;
int reverse(int x){
    int ans=0,rem=0;
    if(x<=INT32_MIN){
       return 0; 
    }
    bool isNeg = false;
    if(x<0){
        isNeg=true;
        x= -x;
    }
    while(x>0){
        if(ans >INT32_MAX/10){
            return 0;
        }
        int rem = x%10;
        ans=ans*10+rem;
        x= x/10;
    }
    return isNeg ? -ans : ans;

}
int main(){
    int n;
    cout<<"Enetr to to be reversed : ";
    cin>>n;
 int result = reverse(n);
 cout<<"Result "<<result;
    return 0;
}