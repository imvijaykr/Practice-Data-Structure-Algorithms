#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){
    int ans =0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
        cout<<"Result of ans "<<ans<<" "<<endl;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    cout<<"Enter the elements of array :";
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueElement = findUnique(arr);
    cout<<uniqueElement;
    return 0;
}