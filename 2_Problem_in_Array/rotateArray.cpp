// https://leetcode.com/problems/rotate-array/description/

// rotate array by k position

// 1st approach(not optimised)

// class Solution {
//   public:
//     void rotate(vector<int> &arr,int k) {
//         // code here
//         int n=arr.size();
// while(k){
//         int temp=arr[n-1];
//         for(int i=n-2;i>=0;i--){
//             arr[i+1]=arr[i];
//         }
// k--;
//  }
//         arr[0]=temp;
//     }
// };



// 2nd approach

// class Solution
// {
// public:
//         void rotate(vector<int> &nums, int k)
//         {
//                 // code here
//                 int n = nums.size();
//                 k = k % n;
//                 int i = 0, j = n - 1;
//                 while (i < j)
//                 {
//                         int temp = nums[i];
//                         nums[i] = nums[j];
//                         nums[j] = temp;
//                         i++;
//                         j--;
//                 }
//                 i = 0;
//                 j = k - 1;
//                 while (i < j)
//                 {
//                         int temp = nums[i];
//                         nums[i] = nums[j];
//                         nums[j] = temp;
//                         i++;
//                         j--;
//                 }
//                 i = k;
//                 j = n - 1;
//                 while (i < j)
//                 {
//                         int temp = nums[i];
//                         nums[i] = nums[j];
//                         nums[j] = temp;
//                         i++;
//                         j--;
//                 }
//         }
// };
