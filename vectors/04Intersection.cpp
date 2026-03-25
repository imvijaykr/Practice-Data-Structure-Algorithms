#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    vector<int> arr{1,3,3,4,5,3,73,6,7,2 };
    vector<int> brr{2,4,3,3,5,7,4};

    vector<int> ans;
    for(int i =0;i<arr.size(); i++){
        int elements = arr[i];
        for(int j=0; j<brr.size(); j++){
            if(elements == brr[j]){
                brr[j]= INT32_MIN;
                
                ans.push_back(elements);
                break;
            }
        }
    }

    for(int i=0;i<ans.size(); i++){
        cout<<ans[i]<<" ";
        
    }
    

    return 0;
}