// // Find Numbers with Even Number of Digits

// // https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/


//        without using any built-in function 

// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         string appendNum = "";
//         int number;
//         int even = 0;
//         int digit = 0;
//         int n= nums.size();

//         for(int i=0;i<n;i++){
//             number = nums[i];
//             while(number>0){
//                 digit = number % 10;
//                 appendNum += digit + '0';
//                 number /=10;
//             }
//             if(appendNum.size()%2==0){
//                 even++;
//             } 
//             appendNum="";
//         }
//         return even;
        
//     }
// };



//       USING BUILT-IN FUNCTION  -->  to_string


// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         string appendNum = "";
//         int even = 0;
//         int n= nums.size();

//         for(int i=0;i<n;i++){
//                 appendNum += to_string(nums[i]);
//             if(appendNum.size()%2==0){
//                 even++;
//             } 
//             appendNum="";
//         }
//         return even;
        
//     }
// };