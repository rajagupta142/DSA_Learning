// // https://strikes.in/practice/68b5b7b8e84e89f34c7cbe98

// bool find4Numbers(vector<int>& A, int X) {
//     sort(A.begin(),A.end());
//     for(int i=0;i<A.size()-2;i++){
//       for(int j=i+1;j<A.size()-1;j++){
//         int start=j+1,end=A.size()-1;
//         int newTarget=X-A[i]-A[j];
//         while(start<end){
//             if(A[start] + A[end]==newTarget){
//                 return 1;
//             }
//             else if(A[start] + A[end]<newTarget){
//                 start++;
//             }
//             else{
//                 end--;
//             }
//         }
//       }
//     }
//     return 0;
// }