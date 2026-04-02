// // https://strikes.in/practice/68b3b3814f186b885b9c8378

// int pairWithGivenDifference(vector<int>& arr, int diff) {
//     // Your code here
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<arr.size();i++){
//         int start=i,end=i;
//         while(start<=end && end<arr.size() && start<arr.size()){
//             if((arr[end]-arr[start])==diff){
//                return 1;
//             }
//             else if((arr[end]-arr[start])<diff){
//                 end++;
//             }
//             else{
//                 start++;
//             }
//         }
//     }
//     return 0;
    
// }