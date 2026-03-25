#include<iostream>
using namespace std;
int main(){
    
    for(int i=0;i<3;i=i+1){
        if(i == 0 || i==2){
            for(int col = 0;col<5;col+=1){
                cout<<"* ";
            }
           
            
        }
        else {
            cout<<"* ";
            for(int i=0;i<3;i=i+1){
                cout<<"  ";
            }
            cout<<"* ";

        }
        cout<<endl;
    }
}
