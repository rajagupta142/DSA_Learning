// https://leetcode.com/problems/transpose-matrix/description/

// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int rowsize=matrix.size();
//         int colsize=matrix[0].size();

//         vector<vector<int>>res(colsize,vector<int>(rowsize));

//         for(int i=0;i<rowsize;i++){
//             for(int j=0;j<colsize;j++){
//                 res[j][i]=matrix[i][j];
//             }
//         }
//         return res;
//     }
// };



// method 2 (only works for n*n array)

// vector<vector<int>> transpose(vector<vector<int>>& mat) {
    
// 	int rowSize = mat.size(), colSize = mat[0].size();

// 	for(int i=0;i<rowSize-1;i++){
// 		for(int j=i+1;j<colSize;j++){
// 			swap(mat[i][j],mat[j][i]);
// 		}
// 	}

// 	return mat;
// }

