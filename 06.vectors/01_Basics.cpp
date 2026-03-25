#include<iostream>
using namespace std;
#include<vector>

int main(){
 vector<int> arr;
// //  int ans=(sizeof(arr)/sizeof(int));
// //  cout<<ans<<endl;

//  cout<<arr.size()<<endl;
//  cout<<arr.capacity();
//  cout<<endl;

//  // insert 
//  arr.push_back(2);
//  arr.push_back(5);
  
//  // print 
//  for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";

//  }
//  cout<<endl;
//  arr.pop_back();
//  // print 
//  for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";

//  }

int n;
cout<<"Enter the no. of vector :";
cin>>n;
vector<int> brr(n, -001);
for(int i=0;i<brr.size(); i++){
    cout<<brr[i]<<" ";
}
cout<<endl;
vector<int> crr{2,8,53,57,7};
for(int i=0;i<crr.size(); i++){
    cout<<crr[i]<<" ";
}

 


    return 0;
}