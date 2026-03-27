// https://leetcode.com/problems/find-peak-element/
// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//     int n=nums.size();
     
//     int start=0,end=n-1;

//     while(start<end){
//         int mid= start + (end-start)/2;

//         if(nums[mid] < nums[mid+1]){
//           start=mid + 1;
           
//         }
//         else{
//          end = mid;
//         }
//     }
//      return start;
//     }
// };




//considering edge cases where peak element is in 0 index or n-1 index
// Examples
// Example 1: [12,8,4]
// start=0, end=2
// (start<end)   (0<2)--true
// mid=1 → arr[1]=8 < arr[2]=4 → false → end=mid=1
// (start<end)   (0<1)--true
// mid=0 → arr[0]=12 < arr[1]=8 → false → end=mid=0
// start==end==0 (start<end)--false   loop breaks→ peak index = 0 ✅
// Example 2: [8,14,19]
// start=0, end=2
// mid=1 → arr[1]=14 < arr[2]=19 → true → start=mid+1=2
// start==end==2 → peak index = 2 ✅