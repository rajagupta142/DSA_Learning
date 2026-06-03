// // Running Sum of 1d Array

// // https://leetcode.com/problems/running-sum-of-1d-array/description/

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int sum=0;
//         int n = nums.size();

//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//             nums[i]=sum;
//         }
//     return nums;
//     }
// };