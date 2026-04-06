// // https://strikes.in/practice/6959404ecab3780e52c71bd5

// class Solution {
//   public:
//     vector<int> EqualSum(vector<int> arr) {
//         //Code here
//         int n=arr.size();
//         long long sum=0,prefixSum=0,suffixSum=0;
//         long long MaxDiff=LLONG_MAX;
//         long long diff;
//         int position=-1;
//         int flag=-1;

//         for(int i=0;i<n;i++){
//             sum=sum+arr[i];  
//         }
//         for(int i=0;i<n-1;i++){
//             prefixSum = prefixSum + arr[i];
//             suffixSum=sum-prefixSum;
//              diff=abs(prefixSum- suffixSum);
//              if(diff<MaxDiff){
//                 MaxDiff=diff;
//                 position=i+2;
//                 if(prefixSum>suffixSum){
//                    flag=2;
//                 }
//                 else{
//                     flag=1;
//                 }

//              }
//         }
//          return {(int)MaxDiff, position, flag};
//     }
// };