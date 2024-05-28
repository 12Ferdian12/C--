#include <bits/stdc++.h> 
using namespace std;

int Sum(vector<int>& nums){
    int totalOdd = 0;
    int total = 0;
    int DB = 0;
    int big = nums[0]; // Initialize big with the first element
    int i;

    DB = nums[0] + nums[nums.size() - 1]; // Sum of first and last elements

    if(nums.size() == 1) {
        return nums[0];
    } else if(nums.size() < 3) {
        return std::max(nums[0], nums[1]);
    }

    for(i = 0; i < nums.size(); i += 2) {
        totalOdd += nums[i]; // Sum of elements at odd indices
    }

    for(i = 1; i < nums.size(); i += 2) {
        total += nums[i]; // Sum of elements at even indices
    }

    for(i = 0; i < nums.size(); i++) {
        big = std::max(big, nums[i]); // Find the maximum element in the array
    }

    if(totalOdd == total) {
        return total;
    } else if(DB > big && DB > totalOdd) {
        return DB;
    } else if(totalOdd > big && totalOdd > total) {
        return totalOdd;
    } else if(total > big && total > totalOdd) {
        return total;
    } else {
        return big;
    }
}

int main(){
    vector<int> nums = {1,2,1,2};
    cout<< Sum(nums);
}