#include<iostream>
using namespace std;
int add(int a, int b);
// {
//     int result =a+b;
//     return result;
// }
int main(){
    int a,b;
    cin>>a>>b;
    int sum= add(a,b);
    cout<<sum;

}
int add(int a, int b){
    int result =a+b;
    return result;
}