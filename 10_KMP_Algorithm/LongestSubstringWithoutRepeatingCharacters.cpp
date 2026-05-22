// // https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
// // 3. Longest Substring Without Repeating Characters

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
        
//         int n= s.size();
//         bool freq[256] = {0};
//         int start = 0 ,end = 0 ;
//         int answer = 0;

//         while(end < n){

//             while(freq[s[end]]==1){
//                 freq[s[start]] = 0;
//                 start ++;
//             }

//             freq[s[end]] = 1;
//             answer = max(answer,end - start + 1);
//             end ++;
//         }
//         return answer;
//     }
// };