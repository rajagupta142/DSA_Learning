// https://leetcode.com/problems/defanging-an-ip-address/description/

// class Solution {
// public:
//     string defangIPaddr(string address) {
//         int n = address.size();
//         string ans;

//         for(int i=0;i<n;i++){
//             if(address[i]=='.'){      // if you don't take new string
//                 ans= ans + "[.]";    // you cannot do address[i]=="[.]" because 
//             }                       //addres[i] is 1 char and "[.]" is 3 char
//             else{
//                 ans = ans + address [i];
//             }
//         }
//         return ans;
//     }
// };