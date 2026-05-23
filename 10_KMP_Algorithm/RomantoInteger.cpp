// // https://leetcode.com/problems/roman-to-integer/description/

// // 13. Roman to Integer

// class Solution {
// public:
//     int romanToInt(string s) {

//         int start = 0;
//         int answer= 0;

//         char Roman[] = {'I','V','X','L','C','D','M'};
//         int Number[] = {1,5,10,50,100,500,1000};
//         int n1 =  s.size();
//         int n2 = 7;

//         while(start < n1){

//         int num1 = 0,num2 = 0;
//             for(int i=0;i<n2;i++){

//                 if(s[start]==Roman[i]){
//                     num1 = Number[i];
//                 }
//                 if(start + 1 < n1 && s[start + 1] == Roman[i]){
//                     num2 = Number[i];
//                 }
//             }

//             if(num1<num2){
//                 answer-= num1;
//             }
//             else{
//                 answer+=num1;
//             }

//             start++;
//         }
//         return answer;
//     }
// };