// // https://strikes.in/practice/68b7dbfdcdd59cb7b2943dbe

// // Smallest Distinct Window

// int findSubString(string str) {
//     // Your code here
//     int n = str.size();
//     int freq[256] = {0};
//     int uniqueChar = 0;

//     for(int i=0;i<n;i++){
//         if(freq[str[i]]==0){
//             freq[str[i]] = 1;
//             uniqueChar++;
//         }
//     }

//     int count[256] = {0};
//     int start = 0, end = 0;
//     int answer = n;
//     int totalUniqueChar = 0;

//     while(end < n){

//         count[str[end]]++;

//         if(count[str[end]]==1){
//             totalUniqueChar++ ;
//         }

//         while(totalUniqueChar == uniqueChar){
//             answer = min(answer,end - start + 1);
//             count[str[start]]--;

//             if(count[str[start]]==0){
//                 totalUniqueChar--;
//             }
            
//               start ++;
//         }
//         end++;
//     }
//     return answer;

// }