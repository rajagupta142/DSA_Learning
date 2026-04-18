// https://leetcode.com/problems/rotate-image/


// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {

//         int rowsize = matrix.size();
//         int colsize = matrix[0].size();

//         vector<vector<int>> Transpose(colsize, vector<int>(rowsize));

//         for (int i = 0; i < rowsize; i++) {
//             for (int j = 0; j < colsize; j++) {
//                 Transpose[j][i] = matrix[i][j];
//             }
//         }

//         for (int i = 0; i < colsize; i++) {

//             int colstart = 0, colEnd = matrix[0].size() - 1;

//             while (colstart < colEnd) {
//                 swap(Transpose[i][colstart], Transpose[i][colEnd]);
//                 colstart++, colEnd--;
//             }
//         }
//         matrix = Transpose;
//     }
// };