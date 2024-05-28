#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& nums, int low, int high) {
    int pivot = nums[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (nums[j] <= pivot) {
            ++i;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[high]);
    return i + 1;
}

void quickSort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int pi = partition(nums, low, high);

        quickSort(nums, low, pi - 1);
        quickSort(nums, pi + 1, high);
    }
}

vector<int> sortArray(vector<int>& nums) {
    quickSort(nums, 0, nums.size() - 1);

    int i,j,piv = nums[0];
    vector<int> temp1 = {};
    vector<int> temp2 = {};
    for(i = 0; i < nums.size(); i++){
        for(j = i + 1; i < nums.size(); j++){
            if(nums[i] > nums[j] ){
                temp1 = {nums[j]};
            }
        }
    }  
    return temp1;
}

int main(){
    vector<int> nums = {5,2,3,1};
    sortArray(nums);

    string test = "test";

    cout << test[0];

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
};