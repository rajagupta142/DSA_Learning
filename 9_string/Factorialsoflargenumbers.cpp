// // https://strikes.in/practice/695fd81c97b669464276fb78

// class Solution {
//   public:
//     vector<int> factorial(int num) {
//         // code here
//         vector<int>ans(1,1);

//         while(num>=1){

//            int carry = 0;

//             for(int i=0;i<ans.size();i++){
                
//                 int sum = ans[i]*num + carry;  
//                 ans[i] = sum%10;
//                 carry = sum/10;
//             }

//             while(carry){
//                 ans.push_back(carry % 10);  // if carry is 123
//                 carry = carry/10;
//             }
//                 num--;
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };