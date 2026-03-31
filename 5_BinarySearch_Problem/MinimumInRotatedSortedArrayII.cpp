// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/description/?envType=problem-list-v2&envId=binary-search


// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n=nums.size();
//         int start=0,end=n-1;

//       while(start<end){
//         int mid= start + (end-start)/2;

//         if(nums[mid]>nums[end]){
//            start= mid + 1;
//         }
//         else if(nums[mid]<nums[end]){
//             end=mid;
//         }
//         else{
//             end--;
//         }
//       }
//       return nums[start];
//     }
// };



//------------------------------------------------------------------------------

//Mistakes to avoid


// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n=nums.size();
//         int start=0,end=n-1;

//       if(nums[0]<=nums[n-1]){            // this will not work for this [3,1,3]
//          return nums[0];          // Works when no duplicates, ❌ Fails when duplicates exist
//             
//       }
//       while(start<end){
//         int mid= start + (end-start)/2;

//         if(nums[mid]>nums[end]){
//            start= mid + 1;
//         }
//         else if(nums[mid]<nums[end]){
//             end=mid;                 //❌  end=mid -1; because when (nums[mid]<nums[end])
//         }                  // from mid till end, array is sorted,so,minimum can be mid as well
//         else{              //but we need to find if other element less than mid is there on right
//             end--;       // if nums[mid] == nums[end] we don't know which side minimum lies
//         }
//       }
//       return nums[start];
//     }
// };
