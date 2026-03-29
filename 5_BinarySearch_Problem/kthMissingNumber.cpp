// // https://leetcode.com/problems/kth-missing-positive-number/submissions/1962100209/

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         for(int i=0;i<arr.size();i++){
//             if(arr[i] > k){
//                 return k;
//             }
//             else{
//                 k++;
//             }
//         }
//         return k;
//     }
// };