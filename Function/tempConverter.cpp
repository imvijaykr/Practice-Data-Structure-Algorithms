#include<iostream>
using namespace std;
float converter(float cel){
    float f = ((9.00/5.00)*cel)+32.00;
    return f;
}
int main(){
    float n;
    cout<<"Enter value of celsius :";
    cin>>n;
    float result = converter(n);

    cout<<n<<" Celsius = "<<result<<" farehnhight";
    return 0;
}