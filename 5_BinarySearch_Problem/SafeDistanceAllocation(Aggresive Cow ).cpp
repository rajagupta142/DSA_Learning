// // https://strikes.in/practice/68b39d7d4f186b885b9c82df

// bool safeDistance(int maxDistance,vector<int> &stalls, int k){
//     int count=1, cowsPos=stalls[0];
//     for(int i=1;i<stalls.size();i++){
//         if(stalls[i]-cowsPos>=maxDistance){
//             count++;
//             cowsPos=stalls[i];
//         }
//     }
//     return count>=k;
// }


// int maxSafeDistance(vector<int> &stalls, int k) {
//     // Your code here
//     sort(stalls.begin(),stalls.end());
//     int n=stalls.size();
//     int start=1,end=stalls[n-1]-stalls[0],ans;
//     while(start<=end){
//         int mid=start + (end-start)/2;
//         if(safeDistance(mid,stalls,k)){
//             start=mid+1;
//             ans=mid;

//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return ans;
// }