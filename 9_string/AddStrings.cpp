// // https://leetcode.com/problems/add-strings/description/


// Approach 1 

// class Solution {
// public:
//     string addStrings(string num1, string num2) {

//         int n1 = num1.size();
//         int n2 = num2.size();
//         string ans = "";
//         int carry = 0;
//         int start1 = n1 - 1;
//         int start2 = n2 - 1;

//         while (start1 >= 0 || start2 >= 0 || carry != 0) {
//             int sum = carry;

//             if (start1 >= 0) {
//                 sum += num1[start1] - '0';
//                 start1--;
//             }

//             if (start2 >= 0) {
//                 sum += num2[start2] - '0';
//                 start2--;
//             }

//             ans += sum % 10 + '0';
//             carry = sum / 10;
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// }
// ;


// APPROACH 2


// class Solution {
// public:
//     string addStrings(string num1, string num2) {
        
//         int endFirst = num1.size() -1;
//         int endSecond = num2.size() -1;

//        int carry = 0;
//         string ans="";

//         while(endFirst>=0   ||  endSecond>=0 || carry!=0){

//              int sum = carry;

//             if(endFirst>=0){
//                 sum += num1[endFirst] -'0';
//                 endFirst--;
//             }

//             if(endSecond>=0){
//                 sum += num2[endSecond] -'0';
//                 endSecond--;
//             }

//             ans.push_back(sum%10 + '0');  //  sum%10 + '0' -->  4 + '0' ----> '4'
//             carry = sum/10;
//         }

//         reverse(ans.begin(),ans.end());
//         return ans;

//     }
// };