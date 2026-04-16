// https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/

// method : 1 (not optimised)

// int maxDiff(vector<int> &arr) {
//     // Your code here
//    int n=arr.size();
//    int diff=-1;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 diff=max(diff,arr[j]-arr[i]);
//             }
//             else{
//                 continue;
//             }
//         }
//     }
//     return diff;
    
// }


// method : 2  (optimised)

// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//          int n=nums.size();
//          vector<int>suffixMax(n,0);
//          suffixMax[n-1]=nums[n-1];
//          int maxdiff=-1;

//     for(int i=n-2;i>=0;i--){
//            suffixMax[i]=max(suffixMax[i+1],nums[i]);
//         }

//         for(int i=0;i<n-1;i++){
//             if(suffixMax[i+1]>nums[i]){
//               maxdiff =max(maxdiff,suffixMax[i+1]-nums[i]);
//             }
//         }
//         return maxdiff;
//     }
// };