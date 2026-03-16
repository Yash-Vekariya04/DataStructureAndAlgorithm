#include <vector> // for array
#include <unordered_map> // for hashtable
#include <algorithm> // for sort() function
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // copy the array to sort
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end()); // sorting

        // Add elements in the table
        unordered_map<int, int> tble;
        for(int i = 0; i < sorted_nums.size(); i++){
            // if the number is appeared first time, add to tble (remove duplicates in tble)
            if(tble.count(sorted_nums[i]) == 0){
                tble[sorted_nums[i]] = i; // key: element, value: index(no. of elements < ele)
            }
        }

        // creating an answer array
        vector<int> ans;
        for(int i : nums){
            ans.push_back(tble[i]); // adding the element to the ans array
        }
        return ans;
    }
};