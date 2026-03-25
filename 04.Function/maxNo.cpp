#include<iostream>
using namespace std;
int findMax(int x,int y,int z){
       if(x>y && y>z){
        return x;
       }
       else if(y>x && x>z){
        return y;
       }
       else{
        return z;
       }
       
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maximumNo =findMax(a,b,c);
    cout<<maximumNo;
    return 0;
}

