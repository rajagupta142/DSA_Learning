
// https://leetcode.com/problems/spiral-matrix/


// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {

//         int rowsize = matrix.size();
//         int colsize = matrix[0].size();

//         int rowstart = 0, rowEnd = matrix.size() - 1;
//         int colstart = 0, colEnd = matrix[0].size() - 1;

//         vector<int> ans;

//         while (rowstart <= rowEnd && colstart <= colEnd) {

//             // first row
//             for (int i = colstart; i <= colEnd; i++) {
//                 ans.push_back(matrix[rowstart][i]);
//             }
//             rowstart++;

//             // last column
//             for (int i = rowstart; i <= rowEnd; i++) {
//                 ans.push_back(matrix[i][colEnd]);
//             }
//             colEnd--;

//             // last row
//             if (rowstart <= rowEnd) {
//                 for (int i = colEnd; i >= colstart; i--) {
//                     ans.push_back(matrix[rowEnd][i]);
//                 }
//                 rowEnd--;
//             }

//             // first column
//             if (colstart <= colEnd) {
//                 for (int i = rowEnd; i >= rowstart; i--) {
//                     ans.push_back(matrix[i][colstart]);
//                 }
//                 colstart++;
//             }
//         }
//         return ans;
//     }
// };