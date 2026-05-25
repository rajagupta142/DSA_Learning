// //  Longest Happy Prefix

// // https://leetcode.com/problems/longest-happy-prefix/description/

// class Solution {
// public:
//     string longestPrefix(string s) {
        
//         int n =  s.size();
//         int prefix = 0, suffix = 1;
//         vector<int>LPS(n,0);

//         while(suffix < n){

//             if(s[prefix] == s[suffix]){
//                 LPS[suffix] = prefix + 1;
//                 suffix++,prefix++;
//             }
//             else{
//                 if(prefix==0){
//                   suffix++;
//                 }
//                 else{
//                  prefix = LPS[prefix - 1];   
//                 }
//             }
//         }
//         string ans = "";
//         for(int i = 0; i< LPS[n-1];i++){
//             ans+=s[i];
//         }
//         return ans;
//     }
// };

