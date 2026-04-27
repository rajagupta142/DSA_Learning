// https://leetcode.com/problems/valid-palindrome/

// class Solution {
// public:
//     bool isPalindrome(string s) {

//      int n = s.length();
//      int start = 0,end=n-1;

//      for(int i=0;i<n;i++){
//         if(s[i]>='A' && s[i]<='Z'){
//            s[i]= s[i] + 32;
//         }
//      }


//      while(start<=end){

//         while(start < end && !isalnum(s[start]))
//         start++;

//         while(start < end && !isalnum(s[end]))
//         end--;
  
//         if(s[start] != s[end]){
//             return false;
//         }

//         start ++,end--;
//      }
//      return true;
//     }
// };