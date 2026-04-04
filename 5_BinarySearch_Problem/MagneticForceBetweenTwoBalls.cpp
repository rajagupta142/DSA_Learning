// // https://leetcode.com/problems/magnetic-force-between-two-balls/description/

// bool distributionPossible(int minPos,vector<int>& position, int m){
//      int count=1, lastpos=position[0];
//      for(int i=1;i<position.size();i++){
//         if(position[i]-lastpos>=minPos){
//             count++;
//             lastpos=position[i];
//         }
//      }
//      return count>=m;
// }


// class Solution {
// public:
//     int maxDistance(vector<int>& position, int m) {
//         sort(position.begin(),position.end());
//         int n=position.size();
//         int start=1, end=position[n-1] - position[0],ans;
//         while(start<=end){
//            int mid=start + (end-start)/2;
//            if(distributionPossible(mid,position,m)){
//             ans=mid;
//             start=mid+1;
//            }
//            else{
//             end=mid-1;
//            }
//         }
//         return ans;
//     }
// };