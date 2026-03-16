class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> tbl;

        for(int i = 0; i < nums.size(); i++){
            int ele1 = nums[i];
            int ele2 = target - ele1;

            if(tbl.count(ele2)){
                return {tbl[ele2], i};
            }

            tbl[ele1] = i;
        }
        return {};
    }
};