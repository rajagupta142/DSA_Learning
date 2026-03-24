// https://leetcode.com/problems/sum-of-unique-elements/submissions/1953299896/

// class Solution
// {
// public:
//     int sumOfUnique(vector<int> &nums)
//     {
//         int n = nums.size();
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             bool found = false;
//             for (int j = 0; j < n; j++)
//             {
//                 if (i == j)
//                 {
//                     continue;
//                 }
//                 if (nums[i] == nums[j])
//                 {
//                     found = true;
//                     break;
//                 }
//             }
//             if (found == false)
//             {
//                 sum = sum + nums[i];
//             }
//         }
//         return sum;
//     }
// };