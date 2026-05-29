class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i = 0; i <  nums.size(); i++){
            int sum = 0;
            string ele = to_string(nums[i]);
            for(char ch : ele){
                sum += ch - '0';
            }
            nums[i] = sum;
        }
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};
