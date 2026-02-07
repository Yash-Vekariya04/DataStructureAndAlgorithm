// 2824. Count Pairs Whose Sum is Less than Target
// Given a 0-indexed integer array nums of length n and an integer target, return the number of pairs (i, j) where 0 <= i < j < n and nums[i] + nums[j] < target.


// class Solution
// {
// public:
//     int countPairs(vector<int> &nums, int target)
//     {
//         int count = 0;
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (nums[i] + nums[j] < target)
//                 {
//                     count += 1;
//                 }
//             }
//         }
//         return count;
//     }
// };