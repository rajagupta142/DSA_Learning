// // https://leetcode.com/problems/sqrtx/

// class Solution {
// public:
//     int mySqrt(int x) {
//         if(x<2) return x;
//         int start=0,end=x/2,ans=0;
//         while(start<=end){
//             long long mid=start+(end-start)/2;
//             if(mid*mid<=x){
//                 start=mid+1;
//                 ans=mid;
//             }
//             else{
//                 end=mid-1;
//             }
//         }
//         return ans;
//     }
// };