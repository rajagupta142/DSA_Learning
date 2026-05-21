// // https://leetcode.com/problems/sorting-the-sentence/description/


// class Solution {
// public:
//     string sortSentence(string s) {
        
//         string word="";
//         vector<string>position(10);


//         for(int i=0;i<s.size();i++){

//             if(s[i]==' ')
//               continue;

//             if(s[i]>='1' && s[i]<='9'){
//                 int index = s[i]-'0';
//                 position[index] = word;
//                 word.clear();
//             }
//             else{
//                 word.push_back(s[i]);
//             }
//         }


//          string ans="";

//         for(int i=1;i<10;i++){


//             // if(position[i].size()== 0){    // this will break when word are not continuous 
//             //     break;                     // in an array like if words are at index
//             // }                              // 1,2,3,6,7,8  so, at index 4,5 no word so, this
//                                               // logic break
//             if(position[i].empty()) 
//                 continue;

// //  “Add a space only if there is already something in the string.”

//             if (!ans.empty()) 
//                ans += " ";

//             ans += position[i];
//         }
//         return ans;
//     }
// };