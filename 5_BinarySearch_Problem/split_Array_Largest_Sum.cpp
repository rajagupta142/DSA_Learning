// // https://leetcode.com/problems/split-array-largest-sum/



// bool ArraySplitPossible(int maxSum,vector<int>& nums, int k){
//     int split=1,sum=nums[0];
//     for(int i=1;i<nums.size();i++){
//         sum+=nums[i];
//         if(sum> maxSum){
//             split++;
//             sum=nums[i];
//         }
//     }
//     return split<=k;
// }


// class Solution {
// public:
//     int splitArray(vector<int>& nums, int k) {
//          int n=nums.size();
//          int start=0,end=0,ans;

//          if(n<k){
//             return -1;
//          }

//          for(int i=0;i<n;i++){
//             start=max(start,nums[i]);
//             end+=nums[i];
//          }
//          while(start<=end){
//             int mid=start + (end-start)/2;
//             if(ArraySplitPossible(mid,nums,k)){
//                 ans=mid;
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//          }
//          return ans;
//     }
// };




//--------------------------------------------------------------------------
// Approach is same as Allocate Minimum Number Of Pages

//we need to split the array int k non-non-empty subarrays 
// such that the largest sum of any subarray is minimized.

// nums = [7,2,5,10,8], k = 2

// the highest integer(10) is also gonna be part of either A or B (k=2 => split into 2 sub-array)
// so, take start=10
// in worst case, all the integer went to part A
// sum of all integer=32, end=32

// mid=21 (i.e maxSum=21 if i take maxSum as 21, is it possible to split Array)
// if yes, ans=mid=21 and check for lower sum than this end=mid-1 =>20




// bool ArraySplitPossible(int maxSum,vector<int>& nums, int k){
//     int split=1,sum=nums[0];
//     for(int i=1;i<nums.size();i++){
//         sum+=nums[i];
//         if(sum> maxSum){
//             split++;
//             sum=nums[i];
//         }
//     }
//     return split<=k;
// }


// i have taken largest integer among all of them(i.e 10)
// so, all other integer is either smaller or equal to 10
// so, i can give first integer to A
// so split=1, sum=nums[0];   // A have now integer 7

// i will now check from 1 to n-1
//that can i give more integer to A, if i have maxSum as 21
//  sum+=nums[i];  sum=9
//  if(sum> maxSum){ ------ (9>21)----no, i can give this integer to A
// sum+=nums[i];   now sum is 9 + 5 = 14
// check if i can give this integer 5 to A
// (14>21)-----NO, I Can give this integer to A,Now A has integer 7,2,9 and sum is 14
//likewise keep on checking if i can give more integer to A
// if(sum> maxSum){  ----is true which means i can't give that integer to A,as maxSum is 21
// so,i will give it to B,ans now B will be having integer x,ans sum is x