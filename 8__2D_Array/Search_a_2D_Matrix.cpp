// https://leetcode.com/problems/search-a-2d-matrix/description/

// method 1 (brute force method)

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
            
//     int rowsize=matrix.size();
//     int colsize=matrix[0].size();

//     for(int i=0;i<rowsize;i++){
//         for(int j=0;j<colsize;j++){
//             if(matrix[i][j]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
//     }
// };

