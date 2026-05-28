// // Reverse String II

// // https://leetcode.com/problems/reverse-string-ii/

// class Solution {
// public:
//     string reverseStr(string s, int k) {

//         int n = s.size();

//         for (int i = 0; i < n; i = i + 2 * k) {

//             int start = i;
//             int end = i + (k - 1);

//             if (end >= n) {
//                 end = n - 1;
//             }

//             while (start < end) {
//                 char temp = s[start];
//                 s[start] = s[end];
//                 s[end] = temp;
//                 start++, end--;
//             }
//         }

//         return s;
//     }
// };