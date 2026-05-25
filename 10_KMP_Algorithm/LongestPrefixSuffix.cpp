// // LongestPrefixSuffix

// // https://strikes.in/practice/68b7fccfe8fe0d43cfc6a7f4

// int getLPSLength(string& s) {
//     // Your code here

//     int n = s.size();
//     int prefix = 0, suffix = 1;
//     vector<int>LPS(n,0);

//     while(suffix < n){

//         if(s[prefix]==s[suffix]){
//             LPS[suffix] = prefix + 1;
//             suffix++,prefix++;
//         }
//         else{
//             if(prefix==0){
//                 suffix++;
//             }
//             else{
//               prefix = LPS[prefix-1];
//             }
//         }
//     }
//      return LPS[n-1];
// }