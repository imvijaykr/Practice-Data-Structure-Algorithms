#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans;
    for(int row=0;row<n;row++){
        int col;
        for(int col=0;col<row+1;col++){
            ans=col+1;
            char ch=ans+'A'-1;
            cout<<ch<<" ";
        }
            
            for(int col=row;col>=1;col--){
                ans=col;
            char ch=ans+'A'-1;
            cout<<ch<<" ";
            }
            cout<<endl;
        } 
       
    }
