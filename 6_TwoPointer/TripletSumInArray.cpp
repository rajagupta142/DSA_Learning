// https://strikes.in/practice/69664a29a6f5aa38b90ee240

// bool hasTripletSum(vector<int> &arr, int target) {
//     // Code Here
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<arr.size()-1;i++){
//         int start=i+1,end=arr.size()-1;
//         int newTarget=target-arr[i];
//         while(start<end){
//             if(arr[start]+arr[end]==newTarget){
//                 return true;
//             }
//             else if(arr[start]+arr[end]>newTarget){
//                 end--;
//             }
//             else{
//                 start++;
//             }
//         }
//     }
//     return false;
// }