// https://leetcode.com/problems/trapping-rain-water/description/


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