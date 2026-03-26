// // https://leetcode.com/problems/search-insert-position/submissions/1960174824/

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n=nums.size();
//         int start=0,end=n-1;

//        int index=n;
//         while(start<=end){
//             int mid= start +(end-start)/2;

//             if(nums[mid]==target){
//               return mid;
//             }
//             else if(nums[mid]>target){
//                 end=mid-1;
//                 index=mid;
//             }
//             else{
//                 start=mid+1;
//             } 
//         }
//         return index;
//     }
// };