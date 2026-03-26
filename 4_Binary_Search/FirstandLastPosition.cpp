// // https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/1960152693/

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//     int n=nums.size();

//     int start=0, end=n-1;
//     int startIndex=-1;
    

//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(nums[mid]==target){
//             startIndex=mid;
//             end=mid-1;
//         }
//         else if(nums[mid]<target){
//            start=mid+1;
//         }
//         else{
//            end=mid-1;
//         }
//     }
//     start=0 , end=n-1;

//     int endIndex=-1;
//     while(start<=end){

//         int mid=start+(end-start)/2;
//         if(nums[mid]==target){
//             endIndex=mid;
//             start=mid+1;
//         }
//         else if(nums[mid]<target){
//            start=mid+1;
//         }
//         else{
//            end=mid-1;
//         }
//     }
//      vector<int>ans;
//      ans.push_back(startIndex);
//      ans.push_back(endIndex);

//      return ans;
//     }
// };