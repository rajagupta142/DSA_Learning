// https://strikes.in/practice/695fd61e97b669464276faf9

// string sort(string s) {
//     // Code here

//     int n=s.size();

//     vector<int>sortstr(26,0);

//     for(int i=0;i<n;i++){
//         sortstr[s[i]-'a']++;
//     }

//     string str="";

//     for(int i=0;i<26;i++){
//         while(sortstr[i]>0){
//             char c = 'a' + i;
//             str = str + c;
//             sortstr[i]--;
//         }
//     }
//     return str;
// }