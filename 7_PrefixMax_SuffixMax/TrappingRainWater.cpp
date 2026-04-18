// https://leetcode.com/problems/trapping-rain-water/description/


// method :1        calculate suffixMax and PrefixMax

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n=height.size();
//         vector<int>prefixMax(n);
//         vector<int>suffixMax(n);

//         prefixMax[0]=height[0];
//         suffixMax[n-1]=height[n-1];

//         for(int i=1;i<n;i++){
//            prefixMax[i]=max(prefixMax[i-1],height[i]);
//         }

//         for(int i=n-2;i>=0;i--){
//             suffixMax[i]=max(suffixMax[i+1],height[i]);
//         }  

//       int totalWater=0;
//       int minLeftRight=INT_MAX;

//         for(int i=1;i<n-1;i++){
//           minLeftRight = min(prefixMax[i-1],suffixMax[i+1]);
//           if(minLeftRight > height[i]){
//             totalWater += minLeftRight - height[i];
//           }
//         }
//         return totalWater;
//     }
// };



//method 2 : first from an example array [4,2,1,0,6,4,0,3,2] find the largest block and 
// (i.e 6 so, on the left side of 6 you only need to calculate leftMax  and then compare for
//  every element on left side and on the right side you need to calculate rightMax and 
//  compare every element with rightMax to get to know amount of water each block can store)
// we will iterate from left to max block , right to max block (when arr[left]<arr[right])->left++;
// else right ++; likewise we will reach maxblock

// class Solution {
// public:
//     int trap(vector<int>& height) {
        
//        int n=height.size();

//     int leftMax=0,rightMax=0;
//     int left=0,right=n-1;
//     int totalWater=0;

//     for(int i=0;i<n;i++){
//        while(left<right){
//         if(height[left]<height[right]){
//             if(height[left]<leftMax){
//                 totalWater+=leftMax-height[left];
//             }
//             else{
//                 leftMax=height[left];
//             }
//             left++;
//         }
//         else{
//             if(height[right] < rightMax){
//                 totalWater+=rightMax-height[right];
//             }
//             else{
//                 rightMax=height[right];
//             }
//             right--;
//         }
//        }
//     }
//     return totalWater;




//     }
// };