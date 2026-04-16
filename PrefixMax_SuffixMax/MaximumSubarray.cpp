// https://leetcode.com/problems/maximum-subarray/description/

// method 1 (unoptimised)

// int maxSubarraySum(vector<int> &arr) {
//     // Your code here
//     int n=arr.size();
//     int maxSum=INT_MIN;

//     for(int i=0;i<n;i++){
//         int sum=0;
//        for(int j=i;j<n;j++){
//          sum+=arr[j];
//          maxSum=max(maxSum,sum);
//         }
//     }
//     return maxSum;
// }



//  method 2 (optimised)

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n=nums.size();
//         int sum=nums[0];
//         int maxSum=nums[0];

//         for(int i=1;i<n;i++){
//            if(sum<0){
//             sum=nums[i];
//            }
//            else{
//             sum+=nums[i];
//            }
//            maxSum=max(sum,maxSum);
//         }
//         return maxSum;
//     }
// };
