// // Find the Index of the First Occurrence in a String

// // https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

// class Solution {
// public:
//     int strStr(string haystack, string needle) {

//         int n = needle.size(), m = haystack.size();
//         int prefix = 0, suffix = 1;
//         vector<int> LPS(n, 0);

// //  first find the LPS of needle 
// // example  haystack = "abababca"  needle="ababca";
// // imagine needle and haystack combined  ( needle as prefix combined )

//         while (suffix < n) {

//             if (needle[prefix] == needle[suffix]) {
//                 LPS[suffix] = prefix + 1;
//                 suffix++, prefix++;
//             } else {
//                 if (prefix == 0) {
//                     suffix++;
//                 } else {
//                     prefix = LPS[prefix - 1];
//                 }
//             }
//         }

//         prefix = 0, suffix = 0;

//         while (prefix < n && suffix < m) {

//             if (needle[prefix] == haystack[suffix]) {
//                 suffix++, prefix++;
//             } else {
//                 if (prefix == 0) {
//                     suffix++;
//                 } else {
//                     prefix = LPS[prefix - 1];
//                 }
//             }
//         }

//         // when prefix = n , it will come out of loop that's why if(prefix ==
//         // n){

//         if (prefix == n) {
//             return suffix - n;
//         }

//         return -1;
//     }
// };