// https://strikes.in/practice/6968f70aa6f5aa38b90eec5a


// class Solution {
// public:
//     bool canSplit(vector<int>& nums) {
//         //code here
//         int n=nums.size();
//         int prefixSum=0,suffixSum=0,sum=0;
//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//         }
//         for(int i=0;i<n-1;i++){
//             prefixSum+=nums[i];
//             suffixSum=sum-prefixSum;
//             if(prefixSum==suffixSum){
//                 return true;
//             }
//         }
//          return false;
//     }
// };



// 2nd Approach

// class Solution {
// public:
//     bool canSplit(vector<int>& nums) {
//         //code here
//         int n=nums.size();
//         int prefixSum=0,sum=0;
//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//         }
//         int Target=sum/2;
//         if(sum%2!=0){
//             return false;
//         }

//         for(int i=0;i<n-1;i++){
//             prefixSum+=nums[i];
//             if(prefixSum==Target){
//                 return true;
//             }
//         }
        
//          return false;
//     }
// };