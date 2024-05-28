#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

void print(std::vector <long long int> const &arr) {
   std::cout << "The vector elements are : ";
   for(int i=0; i < arr.size(); i++)
   std::cout << arr.at(i) << ' ';
}
// Kode ku
// string kthLargestNumber(vector<string>& nums, int k) {
//     vector<int> arr = {};
//     for(const string& num : nums){
//         arr.push_back(stoi(num));
//     }
//     sort(arr.begin(), arr.end());
//     // print(arr); 
//     int target = nums.size() - k ;
//     return to_string(arr.at(target));   
// }

string kthLargestNumber(vector<string>& nums, int k) {
    sort(nums.begin(), nums.end(), [](const string& a, const string& b){
        if (a.size() != b.size())
            return a.size() > b.size();
        return a > b;
    });
    return nums[k - 1];   
}

int main(){
    vector<string> nums = {"623986800","3","887298","695","794","6888794705","269409","59930972","723091307","726368","8028385786","378585"};

    int k = 11;
    cout<< kthLargestNumber(nums, k) ;

    return 0;
}