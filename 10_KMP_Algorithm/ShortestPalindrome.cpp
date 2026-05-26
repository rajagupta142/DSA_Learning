// // Shortest Palindrome

// // https://leetcode.com/problems/shortest-palindrome/description/


// class Solution {
// public:
//     string shortestPalindrome(string s) {
        
//         int n = s.size();
//         string temp = s;

//         reverse(temp.begin(),temp.end());

//         string combined = s + '$' + temp;

//         int prefix = 0, suffix = 1;
//         vector<int>LPS(combined.size(),0);

//     if (s.empty()) 
//       return s;


//         while(suffix < combined.size()){

//             if(combined[prefix] == combined[suffix]){
//                 LPS[suffix] = prefix + 1;
//                 prefix++,suffix++;
//             }
//             else{
//                 if(prefix == 0){
//                     suffix++;
//                 }
//                 else{
//                     prefix = LPS[prefix - 1];
//                 }
//             }
//         }

//         int longest_palindrome_length = LPS[combined.size() - 1];
//        string non_palindrome_suffix = s.substr(longest_palindrome_length);
//         reverse(non_palindrome_suffix.begin(),non_palindrome_suffix.end());
//         return non_palindrome_suffix + s;
//     }
// };

// //--------------------------------------------------------------------------------
// // string s = "hello";
// // string result = s.substr(2); // Start at index 2, go to the end
// // // result becomes "llo"