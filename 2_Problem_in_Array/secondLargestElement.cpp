// https://www.geeksforgeeks.org/problems/second-largest3735/0

// class Solution
// {
// public:
//     int getSecondLargest(vector<int> &arr)
//     {
//         // code here
//         int n = arr.size();
//         int largest = arr[0];
//         int second_Largest = -1;
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] > largest)
//             {
//                 largest = arr[i];
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == largest)
//             {
//                 continue;
//             }
//             else if (arr[i] > second_Largest)
//             {
//                 second_Largest = arr[i];
//             }
//         }
//         return second_Largest;
//     }
// };