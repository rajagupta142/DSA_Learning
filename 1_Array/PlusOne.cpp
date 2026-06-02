// // Plus One
// // https://leetcode.com/problems/plus-one/description/

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {

//         int n = digits.size()-1;

//         while(n>=0){
//             if(digits[n]!=9){
//                 digits[n]+=1;
//                 return digits;
//             }
//             else{
//                 digits[n]=0;
//                 n--;
//             }
//         }
//          // all digits were 9  [9,9,9]
//          digits.insert(digits.begin(),1);
//          return digits;
//     }
// };