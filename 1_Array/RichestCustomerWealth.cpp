// // Richest Customer Wealth

// // https://leetcode.com/problems/richest-customer-wealth/description/

// class Solution {
// public:
//     int maximumWealth(vector<vector<int>>& accounts) {
//         int result = 0;
//         int rowsize = accounts.size();
//         int colsize = accounts[0].size();

//         for(int i=0;i<rowsize;i++){
//             int sum = 0;
//             for(int j=0;j<colsize;j++){
//                 sum+=accounts[i][j];
//             }
//             result = max(result,sum);
//         }
//     return result;
//     }
// };