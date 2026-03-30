// https://leetcode.com/problems/kth-missing-positive-number/?envType=problem-list-v2&envId=binary-search

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//        int n=arr.size();
//        int start=0,end=n-1;
//        int ans=n;
//        while(start<=end){
//         int mid=start + (end-start)/2;
//         if(arr[mid]-(mid+1)<k){
//             start=mid + 1;
//         }
//         else{
//             end=mid-1;
//             ans=mid;
//         }
//        }
//        return ans + k;
//     }
// };