// // Sort Vowels in a String

// //  https://leetcode.com/problems/sort-vowels-in-a-string/



// class Solution {
// public:
//     bool isVowel(char ch){
//         return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'||
//         ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
//     }

//     string sortVowels(string &s) {
//         //Code here

//         vector<char>vowels;

//         // COLLECT ALL THE VOWELS OF A STRING IN ARRAY
//         for(int i=0;i<s.size();i++){
//             if(isVowel(s[i]))
//             vowels.push_back(s[i]);
//         }

//         // SORT BY ASCII VALUE (i have to put vowels in string in increasing order of ASCII)
//         sort(vowels.begin(),vowels.end());

//         int j=0;
//         for(int i=0;i<s.size();i++){
//             if(isVowel(s[i])){
//               s[i]=vowels[j];
//               j++;
//             }
//         }

//         return s;
        
//     }
// };