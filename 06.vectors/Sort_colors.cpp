#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int l = 0, m = 0;
    int h = nums.size() - 1;

    while(m <= h){
        if(nums[m] == 0){
            swap(nums[l], nums[m]);
            l++;
            m++;
        }
        else if(nums[m] == 1){
            m++;
        }
        else{
            swap(nums[m], nums[h]);
            h--;
        }
    }
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0,1,2 only): ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    sortColors(nums);

    cout << "Sorted array: ";
    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}