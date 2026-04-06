
// // https://strikes.in/practice/694fdd63ae53764a0b4e692c 
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         //code here
//         int start=0,end=nums.size()-1;

//          while(start<=end){
//            if(nums[start] + nums[end]==target){

//               return {start + 1,end + 1};
//            }
//            else if(nums[start] + nums[end]>target){
//             end=end-1;
//            }
//            else{
//             start++;
//            }
//         }  
        
//        return {-1,-1};
//     }
// };