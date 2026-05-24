// // https://leetcode.com/problems/roman-to-integer/description/

// // 13. Roman to Integer

// Method 1

// class Solution {
// public:
//     int romanToInt(string s) {

//         int start = 0;
//         int answer= 0;

//         char Roman[] = {'I','V','X','L','C','D','M'};
//         int Number[] = {1,5,10,50,100,500,1000};
//         int n1 =  s.size();
//         int n2 = 7;

//         while(start < n1){

//         int num1 = 0,num2 = 0;
//             for(int i=0;i<n2;i++){

//                 if(s[start]==Roman[i]){
//                     num1 = Number[i];
//                 }
//                 if(start + 1 < n1 && s[start + 1] == Roman[i]){
//                     num2 = Number[i];
//                 }
//             }

//             if(num1<num2){
//                 answer-= num1;
//             }
//             else{
//                 answer+=num1;
//             }

//             start++;
//         }
//         return answer;
//     }
// };




//   METHOD  2

// class Solution {
// public:
    
// 	bool isNextCharBigger(char first, char next){

// 		string Roman = "IVXLCDM";
// 		if(first==next){
// 			return false;
// 		}

// 		for(int i=0;i<7;i++){
// 			if(first==Roman[i]){
// 				return true;
// 			}
// 			else if(next == Roman[i]){
// 				return false;
// 			}
// 		}
//         return false;
// 	}

// 	int findvalue(char c){
// 		string Roman = "IVXLCDM";
// 		int numbers[] = {1,5,10,50,100,500,1000};

// 		for(int i=0;i<7;i++){
// 			if(c==Roman[i]){
// 				return numbers[i];
// 			}
// 		}
//         return 0;
// 	}

//     int romanToInt(string s) {
//         //Code here

// 		int n = s.size(), index = 0;
// 		int answer = 0;
        
// 		while(index<n){
         
// 		//  if my next character is bigger than me?
// 		   if(index!=n-1&&isNextCharBigger(s[index],s[index+1])){
//                 answer-=findvalue(s[index]);
// 		   }
// 		   else{
//                answer+=findvalue(s[index]);
// 		   }

// 		   index++;
// 		}

// 		return answer;


//     }
// };