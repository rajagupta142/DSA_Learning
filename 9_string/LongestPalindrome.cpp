// // 409. Longest Palindrome
// // https://leetcode.com/problems/longest-palindrome/description/


// class Solution {
// public:
//     int longestPalindrome(string s) {
//         vector<int>ans(256,0);

//         for(int i=0;i<s.size();i++){
//             ans[s[i]]++;
//         }

//             int sum =0, odd = 0;

//         for(int i=0;i<256;i++){

//             if(ans[i]%2 !=0){
//                 odd = odd +1;;
//                 sum += ans[i] -1;
//             }
//             else{
//                 sum+=ans[i];
//             }
//         }
//             if(odd)
//               sum+=1;
//         return sum;
//     }
// };

