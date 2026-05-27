// // Repeated String Match

// // https://leetcode.com/problems/repeated-string-match/description/

// class Solution {
// public:
//     int repeatedStringMatch(string a, string b) {

//         auto KMP = [&](string &text, string &pattern) {

//             int n = pattern.size();
//             int m = text.size();

//             vector<int> lps(n, 0);

//             // Build LPS
//             int len = 0;
//             int i = 1;

//             while (i < n) {

//                 if (pattern[i] == pattern[len]) {
//                     len++;
//                     lps[i] = len;
//                     i++;
//                 }
//                 else {

//                     if (len != 0) {
//                         len = lps[len - 1];
//                     }
//                     else {
//                         lps[i] = 0;
//                         i++;
//                     }
//                 }
//             }

//             // KMP Search
//             i = 0;
//             int j = 0;

//             while (i < m) {

//                 if (text[i] == pattern[j]) {
//                     i++;
//                     j++;
//                 }

//                 if (j == n) {
//                     return true;
//                 }
//                 else if (i < m && text[i] != pattern[j]) {

//                     if (j != 0) {
//                         j = lps[j - 1];
//                     }
//                     else {
//                         i++;
//                     }
//                 }
//             }

//             return false;
//         };

//         string repeated = a;
//         int count = 1;

//         while (repeated.size() < b.size()) {
//             repeated += a;
//             count++;
//         }

//         if (KMP(repeated, b)) {
//             return count;
//         }

//         repeated += a;
//         count++;

//         if (KMP(repeated, b)) {
//             return count;
//         }

//         return -1;
//     }
// };