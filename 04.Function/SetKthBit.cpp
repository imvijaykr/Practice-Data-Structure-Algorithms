#include<iostream>
using namespace std;
int setKthBit(int n, int k) {
       
        int mask = 1<<k;
        int ans = n | mask;
        return ans;
    }
    int main(){
        int num;
        int k;
        cin>>num>>k;

        int result = setKthBit(num,k);
        cout<<result;
        return 0;

    }
